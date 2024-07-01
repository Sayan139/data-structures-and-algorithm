#include <iostream>
using namespace std;
int counttrailingzeroesnaivemethod(int n){
    //here the major issue is the overflow issue 
    int fact = 1;
    for(int i=2; i<=n; i++)
    {
        fact = fact * i;
    }
    int res = 0;
    while(fact % 10 == 0)
    {
        res++;
        fact /= 10;
    }
    return res;
}
int trailingzeroes(int n)
{
    int res=0;
    for(int i=5; i<=n; i=i*5)
    {
        res = res + (n/i);
    }
    return res;
    // here in the other method we solved the trailing zeroes method problem of overflow by 
    // finding the pair of 2 and 5 and as 5 is less in number than 2 so we counted multiples of 5
    // and (the multiples specifically for the numbers that have more than one 5 ex: 25(5x5),125(5x5x5))
}
int main(){
    int n;
    cout << "enter the number (trailing zeroes): ";
    cin >> n;
    cout << "trailing zeroes of the num " << n << " is: " << trailingzeroes(n) << endl;
    cout << "trailing zeroes of the num " << n << " is: " << counttrailingzeroesnaivemethod(n) << endl;
}