#include <iostream>
using namespace std;
bool check_array_is_rev_and_sorted(vector <int> arr){
    int n = arr.size();
    int count =0;
    for(int i =1; i<n; i++){
        if(arr[i] < arr[i-1]) count++;
    }
    if(arr[n-1]>arr[0]) count++;
    return count<=1;
}
int main() {
    vector<int> arr = {5, 4, 3, 2, 1};  // Example input: reverse sorted array
    
    if (check_array_is_rev_and_sorted(arr)) {
        cout << "The array is reverse sorted and can be circularly sorted." << endl;
    } else {
        cout << "The array is not reverse sorted or not circularly sorted." << endl;
    }

    return 0;
}