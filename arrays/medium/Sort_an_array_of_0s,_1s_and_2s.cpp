#include <iostream>
using namespace std;
// bruite force method most baddest Time Complexity: O(N*logN)
void merge(vector<int>& arr, int left, int mid, int right) {
    int i = left, j = mid + 1, k = 0;
    vector<int> temp(right - left + 1);

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];
    for (i = left, k = 0; i <= right; i++, k++) arr[i] = temp[k];
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
// better approach Time Complexity: O(N) + O(N)
void sortArray(vector<int>& arr, int n) {

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) cnt0++;
        else if (arr[i] == 1) cnt1++;
        else cnt2++;
    }
    for (int i = 0; i < cnt0; i++) arr[i] = 0;

    for (int i = cnt0; i < cnt0 + cnt1; i++) arr[i] = 1;

    for (int i = cnt0 + cnt1; i < n; i++) arr[i] = 2;

}
// optimal apprach 

void sortArray(vector<int>& arr, int n) {

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}