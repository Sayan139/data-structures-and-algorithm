#include <iostream>
using namespace std;
bool checkprime(int n){
    int temp = n ;
    int rev = 0 ;
    while(temp!=0){
        int lt  = temp%10;
        rev = rev *10 + lt;
        temp /= 10;
    }
    return (rev==n);
}
bool isPalindrome(int n) {
    if (n < 0)
        return false;
    int temp = n;
    int rev = 0;
    while (temp != 0) {
        int lt = temp % 10;
        if (rev > (INT_MAX / 10) || (rev == (INT_MAX / 10) && lt > 7)) {
            return false; // If overflow would occur, return false
        }
        rev = rev * 10 + lt;
        temp /= 10;
    }
    return (rev == n);
}
int main(){
    int n;
    cin >> n;
    cout << checkprime(n);
}