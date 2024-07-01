#include <iostream>
using namespace std;
int factorial(int n){
    int res = 1;
    for(int i=2; i<=n; i++)
    {
        res = res * i;
    }
    return res;
}
int main(){
    int n;
    cout << "enter the number (factorial of the number): ";
    cin >> n;
    cout << "the factorial of " << n << " is: " << factorial(n);
}