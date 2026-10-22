#include <iostream>
#include <string>

void swapTexts(std::string& text1, std::string&text2) {
    std::string temp=text2;
    text2=text1;
    text1=temp;
}
int main() {
    std::string texta="GG Freakin ";
    std::string textb="ez ";
    std::cout << texta << textb << std::endl;
    swapTexts(texta,textb);
    std::cout << texta << textb << std::endl;
}
