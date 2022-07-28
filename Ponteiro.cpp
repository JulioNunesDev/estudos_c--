#include <iostream>


int main () {
    int num = 0;
    int *pn;

    pn = &num;


    std::cout << pn << "\n";
    std::cout << &num << "\n";
    std::cout << num << "\n";
    std::cout << *pn << "\n";
    return 0;
}