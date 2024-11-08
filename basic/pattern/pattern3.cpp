#include <iostream>

int main() {
    int n = 5;
    for (int i = n; i > 0; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << j;
        }
        std::cout << std::endl;
    }
    return 0;
}
