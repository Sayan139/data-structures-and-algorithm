#include <iostream>
using namespace std;
void printnto1(int n){
    if(n==0) return ;
    cout << n << " ";
    printnto1(n-1);
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    printnto1(n);
    cout << endl;
}