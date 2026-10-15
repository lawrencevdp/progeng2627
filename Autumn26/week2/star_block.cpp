#include <iostream>

int main() {
    int n, i1=0, i2=0;
    std::cin >> n;
    while (i1<n) {
        while (i2<n) {
            std::cout << "*";
            i2++;
        }
        std::cout << std::endl;
        i1++;
        i2=0;
    }
}