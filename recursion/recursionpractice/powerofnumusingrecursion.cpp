#include <iostream>
using namespace std;
int powerofnumusingrecursion(int x,int n){
    if(n==0){
        return 1;
    }
    return x * powerofnumusingrecursion(x,n-1);
}
int main(){
    int n,x;
    cout << "enter the number: ";
    cin  >> x;
    cout << "enter the number: ";
    cin  >> n;
    cout << "the power of the number is: " << powerofnumusingrecursion(x,n);
}