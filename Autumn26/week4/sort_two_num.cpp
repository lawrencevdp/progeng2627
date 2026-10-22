#include <iostream>

void myswap(double& a, double& b) {
    double temp=b;
    b=a;
    a=temp;
}

void sort_two_numbers(double& s1, double& s2){
    if (s1>s2) {
        double temp=s2;
        s2=s1;
        s1=temp;
    }
}

int main(){
    double n1, n2;
    std::cout << "please enter two numbers:" << std::endl;
    std::cin >> n1 >> n2;
    sort_two_numbers(n1, n2);
    std::cout << n1 << " " << n2 << std::endl;
}