#include <iostream>

class Casa{

public:
int contaLuz;
int diarioMhz;
int mensalMhz;
void verificar(int dLuz){
    this->contaLuz += dLuz * 30;
    printf("conta de luz total do mes: %d", contaLuz);
    this->mensalMhz = this->contaLuz;
}

};




int main ( ) 
{
    Casa *casa = new Casa();
    casa->verificar(5);
    std::cout << "\n" << casa->mensalMhz << std::endl;

    return 0;
}