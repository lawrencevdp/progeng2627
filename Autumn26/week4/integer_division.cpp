#include <iostream>

void intDivision (int a, int b, int& quotient, int& remainder) {
    quotient=a/b;
    remainder=a%b;
}
int main() {
    int a,b,quotient,remainder;
    std::cout << "enter a and b in a/b" << std::endl;
    std::cin >> a >> b;
    intDivision(a,b,quotient, remainder);
    std::cout << quotient << " " << remainder;
}