#include <iostream>
#include <fstream>

int main ()
{
    std::ofstream arquivo;
    arquivo.open("Julio.txt", std::ios::app);
    arquivo << "\n deu certo kkk:::";
    arquivo.close();

    std::ifstream ArquivoE;
    ArquivoE.open("Julio.txt");
    std::string linha;
    if(ArquivoE.is_open()){
        while (getline(ArquivoE, linha))
        {
            std::cout << linha << std::endl;
        }
        ArquivoE.close();
    }else{
        std::cout << "nao foi possivel abrir o arquivo" << std::endl;
    }
    return 0;
}