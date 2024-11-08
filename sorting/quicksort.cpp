#include <iostream>
#include <vector>
using namespace std;
int pivot(vector <int>& arr,int low,int high){
    int pivot = low;
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= arr[pivot]) i++;
        while(arr[j] >= arr[pivot]) j--;
        if (i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[pivot];
    arr[pivot] = arr[j];
    arr[j] = temp;
    return j;
    
}
void quicksort(vector <int>& arr,int low,int high){
    if(low < high){
        int partition_index = pivot(arr,low,high);
        quicksort(arr,low,partition_index-1);
        quicksort(arr,partition_index+1,high);
    }
}
int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}