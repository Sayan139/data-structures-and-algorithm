#include <iostream>
#include <cmath>

using namespace std;

bool armstrong(int n) {
    int length = 0, res = 0, temp = n;
    while (temp != 0) {
        length++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        int lt = temp % 10;
        res += pow(lt, length);
        temp /= 10;
    }
    return res == n;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << (armstrong(n) ? "True" : "False") << endl;
    return 0;
}
