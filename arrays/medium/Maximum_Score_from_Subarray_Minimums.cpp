#include <iostream>
using namespace std;
// bruite force approach  tc:O(n^2) and sc:O(1)
int pairWithMaxSum(vector <int> &arr){
    int n  = arr.size();
    int res = INT_MIN;
    for(int i=0; i<n; i++){
        int smallest = arr[i];
        int second_smallest = arr[i+1];
        for(int j=0; j<n; j++){
            if(arr[i] > smallest && arr[i] < second_smallest){
                second_smallest = arr[i];
            }else if(arr[i] < smallest && arr[i] < second_smallest){
                second_smallest = smallest;
                smallest = arr[i];
            }
            res = max(res,second_smallest + smallest);
        }
    }
    return res;
}
// optimal approach tc:O(n) and sc:O(1)
int pairWithMaxSum(vector <int> &arr){
    int n  = arr.size();
    int res = INT_MIN;
    for(int i=0; i<n-1; i++){
        res = max(res,arr[i]+arr[i+1]);
    }
    return res;
}