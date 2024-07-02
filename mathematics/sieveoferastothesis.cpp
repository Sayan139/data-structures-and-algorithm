#include <iostream>
#include <vector>
using namespace std;
void sieve_of_erastothesis(int n){
    vector <bool> Isprime(n+1,true);
    for(int i=2; i*i<=n; i++)
    {
        if(Isprime[i])
        {
            for(int j=i*i; j<=n; j=j+i)
            {
                Isprime[j]=false;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(Isprime[i])
        {
            cout << i << " ";
        }
    }
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << "the prime numbers till the number : " << endl;
    sieve_of_erastothesis(n);
}