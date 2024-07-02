#include <iostream>
using namespace std;
int power(int a,int b){
    int res=1;
    while(b>0){
        if(b&1){
            res = res * a;
        }
        a=a*a;
        b=b>>1;
    }
    return res;
}
int main(){
    int n,v;
    cout << "enter the number : ";
    cin >> n;
    cout << "enter the number : ";
    cin >> v;
    cout << "the power of " << n << " is : " << power(n,v);
}