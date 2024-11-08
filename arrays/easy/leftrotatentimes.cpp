#include <iostream>
using namespace std;
//tc:O(n+d) this is a bruite force approach extra space : O(d)
void leftrotatedtimes(vector <int> &arr,int d){
    int n = arr.size();
    d = d%n;
    vector <int> temp(arr.begin(),arr.begin()+d);
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }
    for(int i=0; i<d; i++){
        arr[n-d+i] = temp[i];
    }
}
//optomal solution where we optimize space complexity:O(d) to sp:O(1)
void leftrotateoptimal(vector <int> &arr,int d){
    int n = arr.size();
    d = d%n;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
}
// another right rotaion approach
void rightrotate(vector <int> &arr,int d){
    int n = arr.size();
    d = d%n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
}