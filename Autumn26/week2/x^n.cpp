#include <iostream>

int main() {
    int x, n;
    std::cin >> x;
    std::cin >> n;
    int base = x;

    for (int i=0; i<n-1; i++) {
        x*=base;
    }
    std::cout << x << std::endl;
}