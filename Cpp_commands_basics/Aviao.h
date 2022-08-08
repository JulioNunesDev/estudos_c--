#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED
#include <stdio.h>
class Aviao{
public:
    int vel=0;
    int velMAx;
    std::string tipo;
    Aviao(int tp);
    void imprimir(){
    std::cout << "Tipo:...........: " << tipo << std::endl;
    std::cout << "Velocidade Max..: " << velMAx << std::endl;
    std::cout << "Velocidade Atual: " << vel << std::endl;
    std::cout << "--------------------------" <<std::endl;
}
private:

};

Aviao::Aviao(int tp){
    if(tp == 1){
        tipo="Jato";
        velMAx = 800;
    }else if (tp == 2){
        tipo = "monomotor";
        velMAx = 350;
    }else if ( tp == 3){
        tipo = "planador";
        velMAx = 180;
    }
}



#endif