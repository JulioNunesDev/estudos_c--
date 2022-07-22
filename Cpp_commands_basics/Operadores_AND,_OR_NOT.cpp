//Operadores AND, OR, NOT
#include <iostream>

int main ()
{

    int num = 7;

    if( (num >= 5 && num <= 7) || (num > 15 && num < 20) || (num > 20 && num < 25) )
    {
        std::cout << "Valor aceito";
    }
    else
    {
        std::cout << "Valor nao aceito";
    }

    return 0;
}