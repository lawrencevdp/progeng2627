#include <iostream>

int main() {
    int numerator, newNumerator, denominator, quotient=0, remainder=0;
    std::cout << "what integer do you want to divide?" << std::endl;
    std::cin >> numerator;
    std::cout << "what integer do you want to divide by?" << std::endl;
    std::cin >> denominator;
    while (denominator==0) {
        std::cout << "dividing by 0 is not a good idea. please input a different denominator" << std::endl;
        std::cin >> denominator;
    }
    std::cout << "we want to perform the integer division of " << numerator << "by" << denominator << std::endl;
    newNumerator=numerator;

    while (newNumerator/denominator>0) {
        std::cout << newNumerator << " is greater than " << denominator << " so we subract " << denominator << " from " << newNumerator << std::endl;
        newNumerator=newNumerator-denominator;
        std::cout << "we get " << newNumerator << std::endl;
        quotient++;
    }
    remainder=numerator%denominator;
    std::cout << "the quotient is the number of subtractions (" << quotient << ")" << std::endl;
    std::cout << "the remainder is the number we have left at the end (" << remainder << ")" << std::endl;
}