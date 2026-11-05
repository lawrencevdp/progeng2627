#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile; 
    infile.open("text.txt");

    if(infile.is_open()){ 
        int tmp, sum=0;

        // if the reading attempt is unsuccessful then
        // nothing new is stored in tmp
        // and what is returned
        // evaluates to false
        // (so the loop terminates)

        while(infile >> tmp){
            std::cout << tmp << std::endl;
            sum+=tmp;
        }

        infile.close(); 
        std::cout << "total sum is: " << sum << std::endl;

    }
    else{
        std::cout << "error opening file" << std::endl;
    }
}