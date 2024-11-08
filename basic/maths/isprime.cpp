#include <iostream>
#include <cmath>

using namespace std;

bool check_for_prime(int n) {
    if (n == 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (check_for_prime(n)) {
        cout << "It's prime." << endl;
    } else {
        cout << "It's not prime." << endl;
    }
    return 0;
}
