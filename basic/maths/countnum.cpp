#include <iostream>

using namespace std;

int countnum(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Size of the number is: " << countnum(n) << endl;
    return 0;
}
