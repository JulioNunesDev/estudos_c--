//Variáveis Globais e Locais, Operadores matemáticos
#include <iostream>
using namespace std;

int n1, n2;   //Variáveis Globais

int main()
{
    // Operadores matemáticos: + - / * % ()

    int n3, n4; //Variáveis Locais
    int res, res1, res2;
    n1 = 11;
    n2 = 3;
    n3 = 4;
    n4 = 5;

    res = (n1 + n2 + n3 * n4) / 2 * 15 % 25;
    res1 = n1 / n2;
    res2 = n1 % n2;

    cout << "A divisao e: " << res1 << endl;
    cout << "O resto e: : " << res2;

    return 0;
}