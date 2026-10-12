#include <iostream>
#include <string> 
#include <cmath>

void print_triangle(std::string t) {
    std::cout << "this is a " << t << " triangle!" << std::endl;
}

int main() {
    double a,b,c, semiperimeter, area;
    std::string type = "";
    std::cout << "please enter the three side lengths of the triangle" << std::endl;
    std::cin >> a >> b >> c;

    if (a+b > c && a+c>b && b+c>a) {
        if (a==b && a==c && b==c) {
            type="equilateral";
            print_triangle(type);
        }
        else if (a==b||a==c||b==c) {
            type="isosceles";
            print_triangle(type);
        }
        else {
            type="scalene";
            print_triangle(type);
        }
        semiperimeter=(a+b+c)/2;
        area=std::sqrt(semiperimeter*(semiperimeter-a)*(semiperimeter-b)*(semiperimeter-c));
        std::cout << "it's perimeter is " << 2*semiperimeter << std::endl;
        std::cout << "it's area is " << area << std::endl;
    }
    else {
        std::cout << "this is not a valid triangle!" << std::endl;
    }
}

