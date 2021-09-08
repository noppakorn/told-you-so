#include <iostream>
#include <fstream>
#include <random>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::mt19937 this_is_gonna_twist_your_mind;
    this_is_gonna_twist_your_mind.seed(42); // 42 cause why not?

    std::ofstream testcase;
    testcase.open("testcase.txt");

    for (int i = 0; i < 1e6; ++i) {
        for (int kuyplum = 0; kuyplum < 1000; ++kuyplum) {
            testcase << (char)('A' + this_is_gonna_twist_your_mind() % 26);
        }
        testcase << "\n";
    }
    testcase.close();
    return 0;
}