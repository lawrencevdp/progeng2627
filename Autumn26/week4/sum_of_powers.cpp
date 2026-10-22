#include <iostream>
#include <cmath>

int main() {
    double x, n, sum=0;
    std::cout << "please input the base of this sum of powers (x):" << std::endl;
    std::cin >> x;
    std::cout << "please input the amount of repetitions wanted (n):" << std::endl;
    std::cin >> n;
    for (int i=1; i<n+1; i++) {
        sum+=std::pow(x,i);
    }
    std::cout << sum;
}