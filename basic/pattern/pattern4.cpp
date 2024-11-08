#include <iostream>

int main() {
    int n = 5;
    for (int i = 1; i <= n; ++i) {
        for (int j = n; j > i; --j) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        for (int j = 2; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
