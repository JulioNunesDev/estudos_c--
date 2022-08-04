#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main ( )
{
    fstream arquivo;
    char opc = 's';
    string nome;

    arquivo.open("Julio.txt", ios::out);

    while (opc == 's' or opc == 'S')
    {
        cout << "Digite sua mensagem: ";
        cin >> nome;
        arquivo << nome << "\n";
       
        cout << "Deseja escrever outra mensagem: [s/n]:  ";
        cin >> opc;
         system("cls");
    }

    arquivo.close();
    

    return 0;
}