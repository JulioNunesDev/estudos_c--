#include <iostream>

int main ( )
{
   int numeros[5];
    int t = 0;
    for(int i = 0; i < sizeof(numeros)/ 4 ; i++){
        t+=10;
       numeros[i] = {t};
       std:: cout << "\n  valores adc: " << numeros[i] << " - valor T: " << t;
    }



    return 0;
}