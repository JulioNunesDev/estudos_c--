//Operador ternário
#include <iostream>

int main()
{

    int num = 8;
    num == 8 ? std::cout << "sim\n" : std::cout << "Nao";
    num == 8 ? num++ : num--;
    std:: cout << "valor do Num: " << num;

return 0;
}