#include <vector>
#include <iostream>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout) {
    for (int i=0; i<vin1.size(); i++) {
        vout.push_back(vin1[i]);
    }
    for (int i=0; i<vin2.size(); i++) {
        vout.push_back(vin2[i]);
    }
}
int main() {
    std::vector<int> v1 {23,4,2,3,4,10}, vnew;
    std::vector<int> v2 {29,581,-80};
    append_vectors(v1,v2,vnew);

    for (int i=0; i<vnew.size(); i++) {
        std::cout << vnew[i] << " ";
    }

}