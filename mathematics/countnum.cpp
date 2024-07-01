#include <iostream>
using namespace std;
int countdigits(int n){
    int res=0;
    while(n>0){
        n=n/10;
        res++;
    }
    return res;
}
int main(){
    int n;
    cout << "enter the number you want the num of digits: ";
    cin >> n;
    cout << "the number of digits " << n << " have : " << countdigits(n);
}