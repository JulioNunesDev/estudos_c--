// jogo da forca para vcs :)
#include <iostream>
#include <stdlib.h>

using namespace std;
int main ( )
{
    // inicializando vars:
    char palavra[30], secreta[30], letra[1];
    int i, chances, acertos, tam;
    bool acerto;

    i = 0;
    tam = 0;
    acertos = 0;
    chances = 3;
    acerto = false;

    //inicializador da palavra secreta;

    cout << "Digite a palavra secreta: ";
    cin >> palavra;
    system("cls");


    while(palavra[i]!= '\0')
    { // para pega apenas o valor digitado, e para nao deixar espaços restantes no char 
        i++;
        tam++;
    }

    for (i =0; i < 30; i++){
        secreta[i] = '-';
    }

    // Onde executará o codigo;
    while((chances > 0) && (acertos < tam)){
        cout << " Chances restantes: " << chances;
        cout << " Palavra secreta: ";
        for ( i =0; i < tam; i++){ 
            cout << secreta[i];

        }
        cout << "\n\nDigite uma letra: ";
        cin >> letra[0];
        for(i=0; i < tam; i++){
            if(palavra[i] == letra[0]){
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if(!acerto){
            chances--;
        }
        acerto = false;
        system("cls");
    }

    if(acertos == tam){
        cout << "parabens voce venceu!";
    }
    else{
        cout << "que pena, voce perdeu!";
    }

    return 0;
}