#include <iostream>

using namespace std;

bool check_palindrome(int n) {
    int rev = 0, temp = n;
    while (temp != 0) {
        int lt = temp % 10;
        rev = (rev * 10) + lt;
        temp /= 10;
    }
    return rev == n;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (check_palindrome(n)) {
        cout << "It's a palindrome." << endl;
    } else {
        cout << "It's not a palindrome." << endl;
    }
    return 0;
}
