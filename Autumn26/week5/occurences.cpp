#include <iostream>
#include <vector>

int main(){
    std::vector<int> sequence;
    int tmp=0;
    int n,t;
    std::cout << "how many numbers do you want to store?" << std::endl;
    std::cin >> n;
    std::cout << "please input all elements in the vector" << std::endl;
    for (int i=0; i<n; i++) {
        std::cout << "input for index " << i << std::endl;
        std::cin >> tmp;
        sequence.push_back(tmp);
    }
    std::cout << "input the number you want to see how many occurences there are in your vector" << std::endl;
    std::cin >> t;
    int count=0;
    std::vector<int> indices;
    for (int i=0; i<n; i++) {
        if (sequence[i]==t) {
            count++;
            indices.push_back(i);
        }
    }
    std::cout << "there are " << count << " occurences of " << t << " in your list" << std::endl;
    std::cout << std::endl;
    std::cout << "they occured at the following indices: " << std::endl;
    for (int i=0; i<indices.size(); i++) {
        std::cout << indices[i]  <<  " ";
    }
}

    