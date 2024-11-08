#include <iostream>

using namespace std;

void print_all_divisors(int n) {
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            cout << i << " ";
            if (i != n / i) {
                cout << n / i << " ";
            }
        }
    }
    cout << endl;
}

int sum_of_divisors(int n) {
    int total_sum = 0;
    for (int i = 1; i <= n; ++i) {
        total_sum += i * (n / i);
    }
    return total_sum;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "All the divisors of the number: ";
    print_all_divisors(n);

    int sum_divisors = sum_of_divisors(n);
    cout << "Sum of divisors from 1 to " << n << " is: " << sum_divisors << endl;

    return 0;
}
