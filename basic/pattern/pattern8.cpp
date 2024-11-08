#include <iostream>

void diamondPattern(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            std::cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        for (int j = 1; j < i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = n - 1; i > 0; --i) {
        for (int j = 0; j < n - i; ++j) {
            std::cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        for (int j = 1; j < i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n = 5;
    diamondPattern(n);
    return 0;
}
