#include <iostream>
#include <list>
#include <vector>


using namespace std;
struct Personagem {
    std::string nome;
    int vida;
    int resistencia;
    int ataque;
    int defesa;
    int mana;
    bool Persovivo;
    std::string skills[2];

    bool monstro(int atq=0){
        vida -= atq;
        std::cout << "O mostro te atacou, voce sofreu dano de: " << atq << "\n\n";
        std::cout << "sua vida: " << vida << "\n\n"; 
        
        if(vida <= 0) {
        std::cout << "Voce morreu! \n\n";
         
        return false;
        } 
        return true;
    }

    void insereDados(std::string stnome,int stvida, int stres, int statq, int stdef, int stmana){
        nome  = stnome;
        vida  = stvida;
        resistencia  = stres;
        ataque  = statq;
        defesa  = stdef;
        mana  = stmana;
        Persovivo = monstro(10);
     
    }

    void printx(){
        std::cout << "Personagem: " << nome << "\n";
        std::cout << "Life: " << vida << "\n";
        std::cout << "Resistencia: " << resistencia << "\n";
        std::cout << "Ataque: " << ataque << "\n";
        std::cout << "Defesa: " << defesa << "\n";
        std::cout << "Mana: " << mana << "\n";
        if(!Persovivo == 0){
        std::cout << "Status de vida: Vivo";
        }else{
        std::cout << "Status de vida: Morto";

        }
        
        
    }


};



int main (){
    Personagem player1;
    player1.insereDados("Julio Nunes", 100, 75, 120, 130, 60);
    player1.printx();

    return 0;
}