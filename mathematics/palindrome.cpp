#include <iostream>
using namespace std;
bool ispalindromenum(int n){
    int rev=0;
    int temp=n;
    while(temp != 0)
    {
        int lb = temp % 10;
        rev = rev * 10 + lb;
        temp = temp / 10;
    }
    return (rev == n);
}
int main(){
    int n;
    cout << "enter the number (is it palindrome): ";
    cin >> n;
    if(ispalindromenum(n))
    {
        cout << "its palindrome!";
    }
    else
    {
        cout << "its not palindrome";
    }
}