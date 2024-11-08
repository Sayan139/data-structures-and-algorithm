#include <iostream>
#include <set>
using namespace std;
// first i am going to solve it by using bruite force approach where i am going to use the set from c++ stl
int removeduplicates1(vector <int> &arr){
    int n = arr.size();
    set <int> set;
    for(int i =0; i<n; i++){
        set.insert(arr[i]);
    }
    int k = set.size();
    int j =0;
    for(int i:set){
        arr[j++] = i;
    }
    return k;
}
// now using the optimal approach 
int removeDuplicates(vector <int> &arr){
    int i=0;
    int n = arr.size();
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}