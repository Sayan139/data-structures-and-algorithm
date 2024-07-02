#include <iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int mod = 7;
    cout << "modular addition : " << ((a%mod)+(b%mod))%mod << endl;
    cout << "modular multiplication : " << ((a%mod)*(b%mod))%mod << endl;
}