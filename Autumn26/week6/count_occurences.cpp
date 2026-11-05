#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>

int count_vector(std::string s, const std::vector<std::string>& vin) {
    int count=0;
    for (int i=0; i<vin.size(); i++) {
        if (vin[i] == s) {
            count++;
        }
    }
    return count;
}

int main() {
    std::ifstream full_text;
    std::vector<std::string> text, words;
    std::ifstream words_to_find;
    std::ofstream output;
    std::string tmp;
    full_text.open("text.txt");
    words_to_find.open("words_to_find.txt");

    if (!full_text.is_open() || !words_to_find.is_open()) {
        std::cout << "error opening input file(s)" << std::endl;
        return EXIT_FAILURE;
    }

    while (full_text >> tmp) {
        text.push_back(tmp);
    }
    while (words_to_find>> tmp) {
        words.push_back(tmp);
    }

    full_text.close();
    words_to_find.close();

    output.open("occurences.txt");
    if (!output.is_open()) {
        std::cout << "error opening output file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i=0; i<words.size(); i++) {
        int count=count_vector(words[i], text);
        output << words[i] << " " << count << std::endl;
    }

    output.close();
}