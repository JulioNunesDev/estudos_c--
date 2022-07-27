#include <iostream>
#include <queue>

int main ( )
{
    std::queue<std::string> cartas;
    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de Ouros");

    std:: cout << cartas.size() << "\n\n";
    std:: cout << "Primeira carta: " << cartas.front() << "\n\n";
    std:: cout << "Ultima carta: " << cartas.back() << "\n\n";

    if(!cartas.empty()){
          std:: cout << cartas.front() << "\n\n";
          cartas.pop();
    }



    return 0;
}