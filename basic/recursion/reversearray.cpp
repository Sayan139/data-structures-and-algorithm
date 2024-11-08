#include <iostream>
using namespace std;
void printArray(int ans[], int n) {
  cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
   }
}
void reverseArray(int arr[], int n) {
   int p1 = 0, p2 = n - 1;
   while (p1 < p2) {
      swap(arr[p1], arr[p2]);
      p1++; p2--;
   }
   printArray(arr, n);
}
void reverseArray1(int arr[], int start, int end) {
   if (start < end) {
      swap(arr[start], arr[end]);
      reverseArray1(arr, start + 1, end - 1);
   }
}
void reverseArray2(int arr[], int n) {
   //Reversing elements from index 0 to n-1 
   reverse(arr, arr + n);
}
int main(){
    int arr[] = {2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray2(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}