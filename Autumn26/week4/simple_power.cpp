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

int main(){
    // we test examples with integer (and non-negative) exponent

    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "3^-3: " << mypow(3,-3) << std::endl;
}