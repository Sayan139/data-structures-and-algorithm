#include <iostream>
using namespace std;
int greytobinary(int n){
    int res=n; 
    while(n>0){
        n>>=1;
        res^=n;
    }
    return res;
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << "the binary of the grey is: " << greytobinary(n);
}