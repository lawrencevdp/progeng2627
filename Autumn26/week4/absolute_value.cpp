#include <iostream>

double myabs (double i) {
    double abs;
    if (i<0) {
        abs=-i;
    }
    else {
        abs=i;
    }
    return abs;
}

int main(){
    double n;
    // the name of the variable doesn't matter
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;
}