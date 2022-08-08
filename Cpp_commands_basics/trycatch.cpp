#include <iostream>


using namespace std;

double divide(double n1, double n2){
    if(n2==0){
        throw "Erro de divisao por  zero";
    }
    return n1/n2;
}

int main (){
    double n1, n2;
    cin >> n1 >> n2;
    try{
        cout << divide(n1,n2);
    }catch(const char* e){
        cout << "Erro: " << e << endl;
    }


    return 0;
}