#include <iostream>
#include <list>



struct Personagem {
    std::string nome;
    int vida;
    int resistencia;
    int ataque;
    int defesa;
    int mana;
    bool morto_ou_vivo;
    std::string skills[2];

};

int monstro(int atq, int play){
     play -= atq;
    std::cout << "O mostro te atacou, voce sofreu dano de: " << atq << "\n\n"; 
    std::cout << "sua vida: " << play << "\n\n"; 
    if(play <= 0){
        std::cout << "Voce morreu! \n\n";
    }
    return play;
}


int main (){
    Personagem player1;

    std::cout << "Nome do personagem: ";
    std::cin >> player1.nome; 

    player1.vida = 100;
    player1.resistencia = 130;
    player1.ataque = 80;
    player1.defesa = 60;
    player1.mana = 50;
    player1.morto_ou_vivo = true;
    player1.skills[0] = "FireBolt";
    player1.skills[1] = "FrostIce";

    std::cout << "O nome do jogador: " << player1.nome << "\n\n";
    std::cout << "Life do jogador:   " << player1.vida << "\n\n";
    std::cout << "Ataque do jogador: " << player1.ataque << "\n\n";
    std::cout << "Defesa do jogador: " << player1.defesa << "\n\n";
    std::cout << "Mana do jogador:  "   << player1.mana << "\n\n";
    for(int i =0; i < 2; i++){
    std::cout << "skills do jogador: "  << player1.skills[i] << "\n\n";
   
    }
   player1.vida =  monstro(100, player1.vida);
    std:: cout << "vida atual: " <<  player1.vida;

    return 0;
}