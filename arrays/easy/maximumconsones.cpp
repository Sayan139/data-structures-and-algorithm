#include <iostream>
using namespace std;
int max_cons_ones(vector <int> arr){
    int n = arr.size();
    int count = 0;
    int maxi = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            count++;
            maxi = max(maxi,count);
        }else{
        count = 0;
        }
    }
    return maxi;
}