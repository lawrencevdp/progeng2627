#include <iostream>

void rectangleInfo(double length1, double length2, double&area, double&perimeter) {
    area=length1*length2;
    perimeter=2*length1+2*length2;
}

int main() {
    double length1, length2, area, perimeter;
    std::cout << "what are the two lengths of your rectangle?" << std::endl;
    std::cin >> length1 >> length2;
    rectangleInfo(length1, length2, area, perimeter);
    std::cout << area <<" "<< perimeter<<std::endl;
}