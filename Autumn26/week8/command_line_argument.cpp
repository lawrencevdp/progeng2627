#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char* argv[]){

    std::string file ="";
    for (int i=0; i<argc; i++) {
        file+=argv[i];
    }


    std::ifstream inputFile(file);
    std::string temp;

    while (inputFile >> temp){
        std::cout << temp << std::endl;
    }

}