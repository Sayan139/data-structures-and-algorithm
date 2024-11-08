#include <iostream>
using namespace std;

void bubblesort(int arr[],int endindex){
    if(endindex == 0) return;
    for(int i=0; i<endindex; i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    bubblesort(arr,endindex-1);
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before sorting: ";
    printArray(arr, n);

    bubblesort(arr, n - 1);

    cout << "Array after sorting: ";
    printArray(arr, n);

    return 0;
}