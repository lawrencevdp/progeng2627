#include <iostream>

int myfactorial(int in){

    int fact=1, var=in;

    // variable that will store the result

    // TODO: compute the factorial of in
    // so that the result is stored in variable fact
    for (int i=in; i>0; i--) {
        fact*=var;
        var--;
    }


    return fact;
}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}