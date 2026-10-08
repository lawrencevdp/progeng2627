#include <iostream>

int main() {
    double height, weight, bmi;
    std::cout << "What is your weight, in kg?" << std::endl;
    std::cin >> weight;
    std::cout << "What is your height, in meters?" << std::endl;
    std::cin >> height;
    bmi=weight/(height*height);
    std::cout << "Your BMI is " << bmi << std::endl;
}