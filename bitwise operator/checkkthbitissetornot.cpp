#include <iostream>
using namespace std;
//basically there are two efficient method to solve the problem you can choose any one of them!
void iskthbitmethod1(int n,int k){
    int x = (1<<(k-1));
    if((n&x)!=0){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
}
void iskthbitsetmethod2(int n,int k){
    int x = (n>>(k-1));
    if((x&1)!=0){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
}
int main(){
    int n,k;
    cout << "enter the number: ";
    cin >> n;
    cout << "enter the bit you want to check: ";
    cin >> k;
    iskthbitmethod1(n,k);
    iskthbitsetmethod2(n,k);
}