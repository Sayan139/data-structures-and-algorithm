#include <iostream>
using namespace std;
int reverse(int n){
    int rev =0;
    int temp = n;
    while(temp>0){
        int lt = temp%10;
        rev = (rev * 10) + lt;
        temp = temp/10;
    }
    return rev;
}
int reverse2(int n) {
    long long rev = 0 ;
    while(n!=0){
        int lt  = n%10;
        if((rev>INT_MAX/10)||(rev<INT_MIN/10)) return 0;
        rev = (rev *10)+lt;
        n/=10;
    }
    return rev;
}
int main(){
    int n;
    cin >> n;
    cout << reverse(n);
}