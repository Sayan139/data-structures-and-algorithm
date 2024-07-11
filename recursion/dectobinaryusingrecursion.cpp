#include <iostream>
using namespace std;
void dectobin(int n){
    if(n==0) return;
    dectobin(n/2);
    cout << n%2;
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    dectobin(n);
    cout << endl;
}