#include <iostream>
using namespace std;
int checkbit(int  pattern,int arr[],int n){
    int count=0;
    for(int i=0; i<n; i++){
        if((pattern & arr[i])==pattern){
            count++;
        }
    }
    return count;
}
int maxand(int arr[],int n){
    int res=0,count;
    for(int bit=16; bit>=0; bit--){
        count = checkbit(res | (1<<bit),arr,n);
        if(count >= 2){
            res |= (1<<bit);
        }
    }
    return res;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "the max and value is: " << maxand(arr,n);
}