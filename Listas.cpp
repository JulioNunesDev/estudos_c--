#include <iostream>
#include <list>


using namespace std;
int main ( )
{

    std::list<std::string> nomes;

    int tam=5;
    std::string nome;
    for(int i = 0; i < tam; i++){
        std::cout << "Digite os produtos: " << "\n\n";
        std::cin >> nome;
        nomes.push_back(nome);
    }

    std::cout << nomes.size();
    nomes.sort();



    return 0;
}