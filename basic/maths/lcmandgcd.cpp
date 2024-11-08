#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    return b == 0 ? a : b;
}

pair<int, int> lcm_and_gcd(int a, int b) {
    int original_a = a, original_b = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd_value = a;
    int lcm_value = (original_a / gcd_value) * original_b;
    return {lcm_value, gcd_value};
}

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "The GCD is: " << gcd(a, b) << endl;

    auto result = lcm_and_gcd(a, b);
    cout << "The LCM is: " << result.first << endl;
    cout << "The GCD is: " << result.second << endl;

    return 0;
}
