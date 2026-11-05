#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>

int search_vector(std::string s, const std::vector<std::string>& vin) {
    int index=-1;
    for (int i=0; i<vin.size(); i++) {
        if (vin[i] == s) {
            index=i;
        }
    }
    return index;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for (int i=0; i<vin1.size(); i++) {
        if (search_vector(vin1[i], vout) == -1) {
            vout.push_back(vin1[i]);
        }
    }

    for (int i=0; i<vin2.size(); i++) {
        if (search_vector(vin2[i], vout) == -1) {
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    std::string temp;
    for (int i=0; i<vin1.size(); i++) {
        temp=vin1[i];
        int t=search_vector(temp, vin2);
        if(t!=-1) {
            if(search_vector(temp, vout) == -1) {
                vout.push_back(vin2[t]);
            }
        }
    }
}
int main() {
    std::ifstream infile1, infile2;
    std::ofstream union1;
    std::ofstream intersection1;
    std::string tmp1, tmp2;

    std::cout << "what is the name of the first document?" << std::endl;
    std::cin >> tmp1;
    infile1.open(tmp1);
    std::cout << "what is the name of the second document?" << std::endl;
    std::cin >> tmp2;
    infile2.open(tmp2);

    if (!infile1.is_open() || !infile2.is_open()) {
        std::cout << "error opening file(s)" << std::endl;
        return EXIT_FAILURE;
    }
    
    std::vector<std::string> set1, set2;
    while (infile1 >> tmp1) {
        set1.push_back(tmp1);
    }
    while (infile2 >> tmp2) {
        set2.push_back(tmp2);
    }

    std::vector<std::string> union_set;
    std::vector<std::string> intersection_set;

    union_vector(set1, set2, union_set);
    intersection_vector(set1, set2, intersection_set);

    union1.open("union.txt");
    intersection1.open("intersection.txt");

    for (int i=0; i<union_set.size(); i++) {
        union1 << union_set[i] << std::endl;
    }
    for (int i=0; i<intersection_set.size(); i++) {
        intersection1 << intersection_set[i] << std::endl;
    }

    infile1.close();
    infile2.close();
    union1.close();
    intersection1.close();
}