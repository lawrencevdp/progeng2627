#include <iostream> 

int main () {
    int n, n_f, n1;
    std::cin >> n;
    n_f=1;
    n1=n;
    for (int i=0; i<n1; i++) {
        n_f*=n;
        n--;
    }
    std::cout << n_f << std::endl;
}