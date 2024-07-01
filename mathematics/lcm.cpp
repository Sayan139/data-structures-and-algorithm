#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    else
    {
        return gcd(b,a%b);
    }
}
int lcm (int a, int b)
{
    return (a*b)/gcd(a,b);
}
int main(){
    int a,b;
    cout << "enter the number : ";
    cin >> a;
    cout << "enter the 2nd number: ";
    cin >> b;
    cout << "the lcm of the number " << a << " and " << b << " is: " << lcm(a,b);
}