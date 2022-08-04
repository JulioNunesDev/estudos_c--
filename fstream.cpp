#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main ( )
{
    fstream arquivo;
    char opc = 's';
    string nome, linha;

    arquivo.open("Julio.txt", ios::out | ios::app);

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

    arquivo.open("Julio.txt", ios::in);

    cout << "Nomes digitados: " << endl;

    if(arquivo.is_open()){
        while(getline(arquivo, linha)){
            cout << linha << endl;
        }
        arquivo.close();
    }else{
        cout << "arquivo nao foi possivel abrir-lo";
    }
    

    return 0;
}