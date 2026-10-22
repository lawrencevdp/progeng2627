#include <iostream>

double mypow(double base, int exp){
    double result=1; 
    if (exp>=0) {
        for (int i=1; i<=exp; i++) {
            result*=base;
        }
        return result;
    }
    else {
        for (int i=1; i<=-exp; i++) {
                result*=base;
        }   
        return 1/result;
    }

    
}

double sumOfPowers(double x, double n) {
    double sum=0;
    for (int i=1; i<n+1; i++) {
        sum+=mypow(x,i);
    }
    return sum;
}


int main() {
    double x,n;

    std::cout << "please input the base of this sum of powers (x):" << std::endl;
    std::cin >> x;
    std::cout << "please input the amount of repetitions wanted (n):" << std::endl;
    std::cin >> n;
    std::cout << sumOfPowers(x,n);
}