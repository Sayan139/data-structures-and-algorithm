#include <iostream>
using namespace std;
bool isprime(int n)
{
    if( n <= 1) return false;
    if( n==1 ) return false;
    if ( n==2 || n==3 ) return true;
    if( n%2==0 || n%3==0 )return false;
    for(int i=5; i*i <= n; i=i+6)
    {
        if( n%i==0 || n%(i+2)==0 ) return false;
    }
    return true;
}
int main(){
    int n;
    cout << "enter the number (prime or not): ";
    cin >> n;
    if(isprime(n))
    {
        cout << "its a prime number";
    }
    else
    {
        cout << "its not prime number";
    }
}