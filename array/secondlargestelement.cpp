#include <iostream>
using namespace std;
int seondndlargestelementinarray(int n,int arr[]){
    int res =-1, largest=0;
    for(int i =1; i<n; i++){
        if(arr[i]>arr[largest]){
            res= largest;
            largest =i;
        }
        else if(arr[i]!=arr[largest]){
            res =i;
        }
    }
    return res;
}
int main(){
    int arr[] = {4,2,5,7,3,7,4,8,4,8,9,56,3,53};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "the second largest element index in  the array is : " << seondndlargestelementinarray(n,arr) << endl;
    cout << "the second largest element content in the array is: " << arr[seondndlargestelementinarray(n,arr)] << endl;
}