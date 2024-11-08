#include <iostream>
#include <limits>

using namespace std;

int reverse_num(int n) {
    int rev = 0;
    while (n != 0) {
        int lt = n % 10;
        rev = (rev * 10) + lt;
        n /= 10;
    }
    return rev;
}

int reverse(int x) {
    int rev = 0;
    while (x != 0) {
        int lt = x % 10;
        if (rev > (numeric_limits<int>::max() / 10) || rev < (numeric_limits<int>::min() / 10)) {
            return 0;  // Return 0 if overflow would occur
        }
        rev = (rev * 10) + lt;
        x /= 10;
    }
    return rev;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Reversed number (normal): " << reverse_num(n) << endl;
    cout << "Reversed number (with overflow check): " << reverse(n) << endl;

    return 0;
}
