#include <iostream>
using namespace std;
void insertingfunction(int arr[],int n,int& len,int k,int pos){
    if(len < n){
        for(int i=len; i>pos; i--){
            arr[i] = arr[i-1];
        }
        arr[pos] = k;
        len++;
    }
    else{
        cout << "There is no space available for the insertion of the element" << endl;
    }
}
int main(){
    int n ;
    cout << "enter the size of the array : ";
    cin >> n;
    int arr[n];
    int len = 0;
    for(int i=0; i<n; i++){
        int per;
        cout << "you want to enter the element (0(for no) or 1(for yes)): ";
        cin >> per;
        if(per==1){
            cout << "enter the element: ";
            cin >> arr[i];
            len++;
        }else{
            break;
        }
    }
    cout << "the array you created : " << endl;
    for(int i=0; i<len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int k;
    cout << "enter the number you want to insert: ";
    cin >> k;
    int pos;
    cout << "enter the position you want to insert the element: ";
    cin >> pos;
    insertingfunction(arr,n,len,k,pos);
    cout << "your updated status of the array: " << endl;
    for(int i=0; i<len; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}
