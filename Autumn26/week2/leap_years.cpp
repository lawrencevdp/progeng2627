#include <iostream>
#include <string>

int  main() {
    int year;
    bool keep_going;
    keep_going=true;
    std::string answer;
    while (keep_going) {
        std::cout << "please enter a year" << std::endl;
        std::cin >> year;
        if ((year%4==0)) {
            if (year%100==0) {
                if (year%400!=0) {
                    std::cout << "that is not a leap year" << std::endl;
                }
                else {
                std::cout << "this is a leap year!" << std::endl;
                }
            }
            else {
                std::cout << "This is a leap year!" << std::endl;
            }
        }
        else{ 
            std::cout << "this is not a leap year" << std::endl;
        }
        std::cout << "Do you want to check another year?" << std::endl;
        std::cin >> answer;
        if (answer!="yes") {
            keep_going=false;
        }
    }
}
    