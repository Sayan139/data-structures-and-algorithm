#include <iostream>
using namespace std;
int largest(vector <int> arr){
    int n = arr.size();
    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    vector<int> arr = {10, 20, 30, 40, 50}; // Example array

    int result = largest(arr);
    cout << "The largest element is: " << result << endl;
}