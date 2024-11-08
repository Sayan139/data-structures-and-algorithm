#include <iostream>
using namespace std;
//bruite force approach for left rotating the array
void leftrotate1(vector <int> &arr){
    int n = arr.size();
    int temp[n];
    for(int i=1; i<n; i++){
        temp[i-1] = arr[i];
    }
    temp[n-1] = arr[0];
}
//now using the most optimal aproach 
void leftrotatebyone(vector <int> &arr){
    int n = arr.size();
    int temp = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}