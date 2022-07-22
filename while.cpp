#include <iostream>

int main(){

    int step = 0;
    int val = 0;
    while (true)
    {
        std:: cout << "digite [1] para dar um passo ou [2] para parar: ";
        std::cin >> val;
        switch (val)
        {
        case 1:
        step++;
        break;
        case 2:
          std:: cout << "valor de passos dados: \n " << step;
            return false;
            break;
        default:
            std:: cout << "valor invalido\n ";
            break;
        }
        }


    return 0;
}