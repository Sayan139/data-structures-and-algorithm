#include <iostream>
#include <vector>
using namespace std;
void frquencycounter(vector <int> &arr,int n,int p){
    vector <int> hash(p+1,0);
    for(int i=0; i<n; i++){
        if(arr[i]>0 && arr[i]<=p){
            hash[arr[i]]++;
        }
    }
    for(int i=0; i<n; i++){
        if(i+1 <= p){
            arr[i] = hash[i+1];
        }else{
            arr[i] = 0;
        }
    }
}
int main() {
    vector<int> arr = {2, 3, 2, 3, 5};
    int n = 5;
    int p = 5;
    frquencycounter(arr, n, p);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}