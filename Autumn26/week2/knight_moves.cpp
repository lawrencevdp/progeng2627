#include <iostream>
#include <cmath>

int main() {
    double source_x, source_y, destination_x, destination_y, magnitude;
    std::cout << "please input the source square and the destination square, giving first the x and then the y position of each source." << std::endl;
    std::cout << "source square x-position:" << std::endl;
    std::cin >> source_x;
    std::cout << "source square y-position:" << std::endl;
    std::cin >> source_y;
    std::cout << "destination square x-position:" << std::endl;
    std::cin >> destination_x;
    std::cout << "destination square y-position:" << std::endl;
    std::cin >> destination_y;
    magnitude=std::sqrt((source_x-destination_x)*(source_x-destination_x)+(source_y-destination_y)*(source_y-destination_y));
    if (source_x>=0 ||source_y>=0 ||destination_x>=0 ||destination_y>=0 ) {
        std::cout << "this is not a valid move for a knight because the destination is not a square on the board!" << std::endl;
        exit(0);
    }
    if (magnitude!=std::sqrt(5)) {
        std::cout << "this is not a valid move for a knight!" << std::endl;
        exit(0);
    }
    std::cout << "this is a valid move for a knight!" << std::endl;
}
