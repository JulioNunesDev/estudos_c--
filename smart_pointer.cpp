#include <iostream>
#include <memory>
using namespace std;

//quando o ponteiro é unico e nao pode ser compartilhado
// unique_ptr<int>pnum(new int);
//  unique_ptr<string> str(new string("Julio Nunes"));

// quando usado o shared vc pode compartilha o ponteiro 
// shared_ptr<int>pnum(new int);
// shared_ptr<int>pnum2 = pnum;


 //declarando uma classe e utilizando com smart pointer

 class  Carro {
    public:
    int vel=0;
    int getVel(){
        return vel;
    }
    int setVel(int v){
        this->vel = v;
    }
 };

int main (){
    
    unique_ptr<Carro>c1(new Carro);
    c1->setVel(10);
    cout << c1->getVel() <<  endl;

    return 0;
}