#include <iostream>





void printx(){
    std:: cout << "testando \n\n";
}
 int soma(int n1, int n2){
    return n1+n2;
 }

int main ()
{
    printx();
    std:: cout << "Valores da soma: " <<  soma(15,5) << "\n\n";
    return 0;
}