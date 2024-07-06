#include <iostream>
using namespace std;
int findodd(int arr[],int n){
    int res = arr[0];
    for(int i=1; i<n; i++){
        res = res ^ arr[i];
    }
    return res;
}
int main(){
    int n;
    int arr[]={3,6,6,6,6,7,7,7,7,7,7,8,8};
    n =  sizeof(arr)/sizeof(arr[0]);
    cout << "the odd occuring number is: " << findodd(arr,n);
}