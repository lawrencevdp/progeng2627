#include <iostream>

int main() {
    int n, max=0;
    std::cin >> n;
    while (n!=1) {
        if (n>max) {
            max=n;
        }
        if (n%2==0) {
            n/=2;
        }
        else {
            n=n*3+1;
        }
        std::cout << n << std::endl;
    }
    std::cout << "the max number during this sequence was " << max << std::endl;
}