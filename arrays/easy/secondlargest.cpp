#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// bruite force approach which dont take the situation when there is duplicate elements
void secondlargest1(vector <int> arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int small = arr[1];
    int second_largest = arr[n-1];
    cout << "the second smallest number in the array: " << small << endl;
    cout << "the second largest number in the array: " << second_largest << endl;
}
// now the liitle better approach 
void seondlargest2(vector <int> arr){
    int n = arr.size();
    int largest = INT_MIN,second_largest = INT_MIN;
    int smallest = INT_MAX,second_smallest = INT_MAX;
    for(int i=0; i<n; i++){
        largest = max(largest,arr[i]);
        smallest = min(smallest,arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]<second_smallest && arr[i]!=smallest) second_smallest = arr[i];
        if(arr[i]>second_largest && arr[i]!=largest) second_largest = arr[i];
    }
    cout << "second largest element: " << second_largest << " ";
    cout << "second smallest element: " << second_smallest << " ";
}
// the optimal solution
int secondlargest3(vector <int> arr){
    int n = arr.size();
    if(n < 2) return -1;
    int largest = INT_MIN,second_largest = INT_MIN;
    int i;
    for(i=0; i<n; i++){
        if(arr[i]>largest){
            second_largest = largest;
            largest = arr[i];
        }else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest = arr[i];
        }
    }
    return second_largest;
}
int main() {
    vector<int> arr = {10, 5, 20, 20, 8};
    
    int result = secondlargest3(arr);
    
    if (result == -1)
        cout << "Array doesn't have enough elements for a second largest value." << endl;
    else
        cout << "The second largest element is: " << result << endl;
    
    return 0;
}