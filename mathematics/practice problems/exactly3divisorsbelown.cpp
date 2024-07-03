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
int exactly2divisors(int n){
    int counter = 0;
    for(int i=2; i*i<n; i++){
        if(isprime(i)) counter++;
    }
    return counter;
}
int main(){
    int n;
    cout << "enter the number : ";
    cin >> n;
    cout << "the count of numbers which have exactly 3 divisors below " << n << " is : " << exactly2divisors(n);
}