#include <iostream>
#include <stdlib.h>
#include <stdio.h>




int main ( ){
    char *nome;
    nome = (char *) malloc(sizeof(nome));

    gets(nome);

    std::cout << nome;
    return 0;
}