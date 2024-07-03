#include <iostream>
using namespace std;
int digitsinfactorial(int n){
    double res;
    for(int i=1; i<=n; i++){
        res = res + log10(i);
    }
    return floor(res)+1;
}
int main(){
    int n;
    cout << "enter the number : ";
    cin >> n;
    cout << "the digits in factorial of the number " << n << " is : " << digitsinfactorial(n);
}