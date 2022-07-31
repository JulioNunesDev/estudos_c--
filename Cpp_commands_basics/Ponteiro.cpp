#include <iostream>


int main () {
    int *p;
    int numeros[10];
    p=numeros;

    for(int i =0; i < 10; i++){
       *(p+=1) = i;
       std::cout << " addres: " << numeros[i] << " Valores: " << p << "\n\n"; 
    }
    std::cout << p;
    return 0;
}
