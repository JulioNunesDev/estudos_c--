#include <iostream>
#include "Veiculo.h"


int main ( )
{

    Veiculo *carro = new Veiculo();
    std::cout << carro->velLigado() << std::endl;


 return 0;
};