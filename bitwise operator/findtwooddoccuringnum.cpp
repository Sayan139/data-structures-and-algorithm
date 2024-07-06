#include <iostream>
using namespace std;
void twooddoccuringnum(int arr[],int n){
    int x = arr[0];
    for(int i=1; i<n; i++){
        x = x ^ arr[i];
    }
    int k = (x&(~(x-1)));
    int res1=0,res2=0;
    for(int i=0; i<n; i++){
        if((arr[i]&k)!=0){
            res1 = res1 ^ arr[i];
        }
        else{
            res2 = res2 ^ arr[i];
        }
    }
    cout << "the first odd occurances: " << res2 << endl;
    cout << "the second odd occurances: " << res1 << endl;
}
int main(){
    int arr[]= {2,5,5,5,5,3,3,3,9,9,9,9,9,9,9,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    twooddoccuringnum(arr,n);
}