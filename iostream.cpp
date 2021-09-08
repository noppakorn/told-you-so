#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    for (int i = 0; i < 1e7; ++i) {
        int tmp;
        std::cin >> tmp;
        ++tmp;
        std::cout << tmp << "\n";
    }
}
