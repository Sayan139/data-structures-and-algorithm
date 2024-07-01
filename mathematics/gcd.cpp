#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main(){
    int a,b;
    cout << "enter the number : ";
    cin >> a;
    cout << "enter the second number : ";
    cin >> b;
    cout << "the gcd of " << a << " and " << b << " is: " << gcd(a,b);
}