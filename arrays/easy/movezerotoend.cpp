#include <iostream>
using namespace std;
//this is bruite force approachh O(2n) is the tc and sc O(x) x is the size of the temp
void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            temp.push_back(nums[i]);
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        nums[i] = temp[i];
    }
    for (int i = temp.size(); i < n; i++)
    {
        nums[i] = 0;
    }
}
// now the optimal approach with better time complexity
void movethezeroes(vector <int> &arr){
    int n = arr.size();
    int j = -1;
    for(int i =0; i<n; i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    for(int i=j+1; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}