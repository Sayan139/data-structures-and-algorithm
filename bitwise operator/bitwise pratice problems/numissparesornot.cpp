#include <iostream>
using namespace std;
bool isSparse(int n) {
    // n & (n >> 1) will be non-zero if there are two adjacent 1s
    return (n & (n >> 1)) == 0;
}
int main(){
    int n;
    cout << "enter the number : ";
    cin >> n;
    if(isSparse(n)){
        cout << "yes";
    }else{
        cout << "no";
    }
}