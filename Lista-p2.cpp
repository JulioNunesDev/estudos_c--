#include <iostream>
#include <list>


int main (){    

    std::list<int> numeros;
    int tam = 5;
    for(int i = 0; i < tam; i++)
    {
       numeros.push_front(i); 
    }

    std::list<int>::iterator it;

    it = numeros.begin();
    //function advance para coloca a posicao
    advance(it, 2);
    std::cout << numeros.front() << "\n\n";


    return 0;
}