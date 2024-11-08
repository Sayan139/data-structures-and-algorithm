#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,5,6,7,7,7,3,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int hash[8] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }
    int n1 = sizeof(hash) / sizeof(hash[0]);
    for(int i=0; i<n1; i++){
        cout << i << " : " << hash[i] << endl;
    }
}