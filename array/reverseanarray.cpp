#include <iostream>
using namespace std;
//method 1
void reverse(int arr[],int n){
    int low=0,high=n-1;
    while(low < high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
//method 2
void reveresearrayusingforloop(int arr[],int n){
    int rversedarray[n];
    for(int i=0; i<n; i++){
        rversedarray[i] = arr[n-i-1];
    }
    for(int i=0; i<n; i++){
        cout << rversedarray[i] << " ";
    }
}
int main(){
    int arr[]={10,5,7,30};
    int brr[]={4,5,6,2,5};
    int k = sizeof(brr) / sizeof(brr[0]);
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "method 1: " << endl;
    reverse(arr,n);
    cout << "method 2: " << endl;
    reveresearrayusingforloop(brr,k);
}