#include <iostream>
using namespace std;
// this is the bruite force solution
int maxprofitbruite(vector <int> arr){
    int n = arr.size();
    int maxpro =0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] > arr[i]){
                maxpro = max(maxpro,arr[j]-arr[i]);
            }
        }
    }
    return maxpro;
}
// this is the optimal solution
int maxprofitoptimal(vector <int> arr){
    int n= arr.size();
    int minprice = INT_MAX;
    int maxpro = 0;
    for(int i=0; i<n; i++){
        minprice = min(minprice,arr[i]);
        maxpro = max(maxpro,arr[i]-minprice);
    }
    return maxpro;
}