#include <iostream>
using namespace std;
bool largestnums(vector <int> arr){
    int n = arr.size();
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]) return false;
    }
    return true;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    if (largestnums(arr)) {
        cout << "The array is in increasing order." << endl;
    } else {
        cout << "The array is not in increasing order." << endl;
    }
    
    return 0;
}