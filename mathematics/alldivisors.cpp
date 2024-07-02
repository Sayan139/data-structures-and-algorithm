#include <iostream>
using namespace std;
void alldivisors(int n)
{
    int i;
    for(i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            cout << i << " ";
        }
    }
    if(n/i==i){i--;}
    for(; i>=1; i--)
    {
        if(n%i==0)
        {
            cout << (n/i) << " ";
        }
    }
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << "all divisors of the number " << n << " : " << endl;
    alldivisors(n);
}