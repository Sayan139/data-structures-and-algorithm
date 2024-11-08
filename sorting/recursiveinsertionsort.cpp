#include <iostream>
using namespace std;
void insertionsort(int arr[],int i,int n){
    if(i==n) return;
    int key = arr[i];
    int j = i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
    insertionsort(arr,i+1,n);
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: ";
    printArray(arr, n);

    insertionsort(arr, 1, n);  // Start sorting from index 1

    cout << "Array after sorting: ";
    printArray(arr, n);

    return 0;
}