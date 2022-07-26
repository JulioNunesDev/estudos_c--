#include <iostream>


int main ( )
{
    enum armas{fuzil = 100, revolver = 9, rifle = 12, escopeta = 2};
    armas armaSel;
    armaSel=revolver;
    std::cout << armaSel;

    return 0;

}