#include <iostream>
using namespace std;
void printfriq(int arr[],int n){
    int freq = 1,i=1;
    while(i<n){
        while(i<n && arr[i] == arr[i-1]){
            freq++;
            i++;
        }
        cout << "element: " << arr[i-1] << " frequency: " << freq << endl;
        i++;
        freq = 1;
    }
    if(n==1 || arr[n-1] != arr[n-2])
    {
        cout << "element : " << arr[n-1] << " frequency: " << 1 << endl;
    }
}
int main(){
    int arr[] = {10,10,10,25,30,30};
    int n = sizeof(arr) / sizeof(arr[0]);
    printfriq(arr,n);
}
