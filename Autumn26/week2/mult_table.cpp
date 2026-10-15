#include <iostream>

int main() {
    int input, num=1;
    std::cin >> input;

    for (int i=1; i<=input; i++) {
        for (int j=1; j<=input; j++) {
            num=j*i;
            std::cout << num << "\t";
        }
        num=1;
        std::cout << std::endl;
    }
}