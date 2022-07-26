#include <iostream>
#include <string.h>
int main(int argc, char* argv[])
{
    if(argc > 1)
    {

    if(!strcmp(argv[1], "Filmes")){
        std:: cout << "[Lista de filmes] \n\n";
    }else if(!strcmp(argv[1], "Jogo")){
        std:: cout << "[Lista de jogos] \n\n";
    }else{
         std:: cout << "[Lista Vazia] \n\n";
    }
    }
        std::system("pause");
}