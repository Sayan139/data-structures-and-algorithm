#include <iostream>
using namespace std;
void reverse(int arr[],int low ,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void leftrotated(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main(){
    int d;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "enter the number of steps you want to reverse it : ";
    cin >> d;
    leftrotated(arr,n,d);
    cout << "updated array: " << endl ;
    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}