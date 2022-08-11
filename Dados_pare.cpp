#include <iostream>
#include <vector>
#include <utility>

using namespace std;

//Projeto de Store para colocar em prática as aulas de c plus plus;
int main () {

    const char* nome = "Julio Nunes";
    string opc = "s";
    bool end_loop = true;
    vector<int> BD{1,2};
    pair <string, string> bancodados;
    int C_BD;

    
    cout << "Bem vindo ao Store Game: \n\n";

    while(end_loop){
        cout << "Login: [1] " << "Registrar: [2]: ";
        cin >> C_BD;
        if(C_BD == BD[0]){
            cout << "Ola, " << nome << ", Bem vindo de Volta!" << endl;
        }else if (C_BD == BD[1]){
            cout << "Resgistro: \n\n";
            cout << "Username: ";
            cin >> bancodados.first;
             cout << "Senha: ";
            cin >> bancodados.second;

            cout << bancodados.first << " -  " << bancodados.second << endl;
        }else{
            end_loop = true;
            break;
        }


    }






    cout << "Bem vindo: ";


    return 0;
}