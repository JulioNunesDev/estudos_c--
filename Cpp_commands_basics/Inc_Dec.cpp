// Incremento e Decremento de Variáveis, Operadores pós e pré-fixados
#include <iostream>

using namespace std;

int main ()
{
    int n1, n2;
    n1 = 0;
    n2 = 10;

    cout << "valor n1 antes: " << n1 << endl;
    // n1 = n1 + 1 First form simple
    // n1 += 1 Second form simple
    // n1 += 1 Three form simple
    n1++; 
    cout << "valor n1 depois: " << n1 << endl;

    cout << "valor n1 antes decrement: " << n1 << endl;

    n1--;

    cout << "valor n1 depois decrement: " << n1 << endl;

    //pós e pré-fixados

    cout << "valor n2 pos: " << n2++ << endl;
    cout << "valor n2 pre-fixados: " << ++n2 << endl;






    return 0;
}