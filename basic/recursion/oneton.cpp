#include <iostream>
using namespace std;
void oneton(int n){
    if(n==0) return;
    oneton(n-1);
    cout << n << " ";
}
int main(){
    int n;
    cout << "enter the value: ";
    cin >> n;
    oneton(n);
}