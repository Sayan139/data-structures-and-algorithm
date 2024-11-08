#include <iostream>
using namespace std;
bool linearsearch(vector <int> arr,int k){
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i]==k) return true;
    }return false;
}