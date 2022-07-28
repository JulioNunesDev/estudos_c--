#include <iostream>


struct Teste
{
    int numeros[2];
};

void ola(int *var, int valor, int *n){
    *var+=valor;
    n[0]=0;
    n[1]=200;
}
    
int main ( ){
     Teste te;

    int num = 0;
    std:: cout << num << "\n\n";
    ola(&num, 15, te.numeros);
    std:: cout << num << "\n\n";

    for(int i=0; i < 2;i++){
        std::cout << te.numeros[i] << "\n";
    }

    return 0;
}