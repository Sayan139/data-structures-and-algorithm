#include <iostream>
using namespace std;
int grey(int n){
    return n^(n>>1);
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << "the grey num is: " << grey(n);
}