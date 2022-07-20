//Variáveis Globais e Locais, Operadores matemáticos
#include <iostream>
using namespace std;

int n1, n2;   //Variáveis Globais

int main()
{
    // Operadores matemáticos: + - / * % ()

    int n3, n4; //Variáveis Locais
    int res;
    n1 = 11;
    n2 = 8;
    n3 = 4;
    n4 = 5;

    res = (n1 + n2 + n3 * n4) / 2 * 15 % 25;

    cout << "O resultado e: " << res;

    return 0;
}