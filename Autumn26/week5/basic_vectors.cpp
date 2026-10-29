#include <iostream>
#include <vector>
// this header is needed to use vectors

int main(){
    std::vector<int> v; 
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    std::cout << v[0]*(v[1]+v[2]);

}