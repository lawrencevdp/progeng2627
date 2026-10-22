#include <iostream>

double maxOfThree(double a, double b, double c) {
    double max;
    if (a>=b) {
        max=a;
    }
    else {
        max=b;
    }
    if (c>max) {
        max=c;
    }
    return max;
}
int main() {
    std::cout << maxOfThree(2,4,25) << std::endl;
}