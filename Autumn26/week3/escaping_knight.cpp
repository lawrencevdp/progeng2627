#include <iostream>
#include <cstdlib>
#include <cmath>

namespace {
bool isOnBoard(int position) {
    return position >= 1 && position <= 8;
}

bool isKnightMove(int source_x, int source_y, int destination_x, int destination_y) {
    const int delta_x = std::abs(destination_x - source_x);
    const int delta_y = std::abs(destination_y - source_y);
    return (delta_x == 1 && delta_y == 2) || (delta_x == 2 && delta_y == 1);
}

bool hasEscaped(int x, int y) {
    return (x == 1 || x == 8) && (y == 1 || y == 8);
}
}

int main() {
    int source_x, source_y;
    int destination_x, destination_y;

    std::cout << "Please input the source square: first x, then y." << std::endl;
    std::cout << "Source square x-position: ";
    std::cin >> source_x;
    std::cout << "Source square y-position: ";
    std::cin >> source_y;

    std::cout << "Please input the destination square: first x, then y." << std::endl;
    std::cout << "Destination square x-position: ";
    std::cin >> destination_x;
    std::cout << "Destination square y-position: ";
    std::cin >> destination_y;

    if (!isOnBoard(source_x) || !isOnBoard(source_y) || !isOnBoard(destination_x) || !isOnBoard(destination_y)) {
        std::cout << "This is not a valid move for a knight because the destination is not a square on the board!" << std::endl;
        return 1;
    }

    if (!isKnightMove(source_x, source_y, destination_x, destination_y)) {
        std::cout << "This is not a valid move for a knight because it doesn't follow an L shape!" << std::endl;
        return 1;
    }

    source_x = destination_x;
    source_y = destination_y;
    std::cout << "The knight has moved to (" << source_x << ", " << source_y << ")." << std::endl;

    if (hasEscaped(source_x, source_y)) {
        std::cout << "The knight has escaped! GG FREAKIN EZ" << std::endl;
        return 0;
    }

    while (true) {
        std::cout << "Where would you like to move to next?" << std::endl;
        std::cout << "Next x-position: ";
        std::cin >> destination_x;
        std::cout << "Next y-position: ";
        std::cin >> destination_y;

        if (!isOnBoard(destination_x) || !isOnBoard(destination_y)) {
            std::cout << "This is not a valid move for a knight because the destination is not a square on the board!" << std::endl;
            return 1;
        }

        if (!isKnightMove(source_x, source_y, destination_x, destination_y)) {
            std::cout << "This is not a valid move for a knight because it doesn't follow an L shape!" << std::endl;
            return 1;
        }

        source_x = destination_x;
        source_y = destination_y;
        std::cout << "The knight has moved to (" << source_x << ", " << source_y << ")." << std::endl;

        if (hasEscaped(source_x, source_y)) {
            std::cout << "The knight has escaped! GG FREAKIN EZ" << std::endl;
            return 0;
        }
    }
}
