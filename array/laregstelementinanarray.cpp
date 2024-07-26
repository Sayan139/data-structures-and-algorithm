#include <iostream>
using namespace std;
int getlargestelementinanarray(int n,int arr[]){
    int res=0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[res]) res = i;
    }
    return res;
}
int main(){
    int arr[]={3,5,3,1,5,7,3,8,6,9,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "the largest element in the array is : " << getlargestelementinanarray(n,arr);
}