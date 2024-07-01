#include <iostream>
using namespace std;
int trailingzeroes(int n)
{
    int res=0;
    for(int i=5; i<=n; i=i*5)
    {
        res = res + (n/i);
    }
    return res;
}
int main(){
    int n;
    cout << "enter the number (trailing zeroes): ";
    cin >> n;
    cout << "trailing zeroes of the num " << n << " is: " << trailingzeroes(n);
}