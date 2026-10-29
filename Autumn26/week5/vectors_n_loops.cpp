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
    std::cout << "input the highest number you want returned from your list of integers" << std::endl;
    std::cin >> t;
    for (int i=0; i<n; i++) {
        if (sequence[i]<=t) {
            std::cout << sequence[i] << " ";
        }
    }
}

    