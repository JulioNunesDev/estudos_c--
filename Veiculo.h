#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

class Veiculo{
public:
bool VelLigado = true;
bool velLigado (){
    return VelLigado;
}


private:

};

class Moto:public Veiculo{

    public:
    Moto::Moto(){

    }
};

#endif