#include <iostream>

int smallest_factor(int n) {
    int cf=2;
    while (cf!=n) {
        if (n%cf==0) {
            return cf;
        }
        cf++;
    }
    return 0;
}

int main() {
    std::cout << smallest_factor(9);
}