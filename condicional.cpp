//Comando de decisão IF ELSE

#include <iostream>
#include <cstdlib>


int main()
{
  int n1, n2, res;
  char opc;

  inicio:
  system("cls");
  std::cout << "Digite o valor da nota 1: ";
  std::cin >> n1;
  
  std::cout << "Digite o valor da nota 2: ";
  std::cin >> n2;

  res = (n1 + n2 ) / 2;
 
  if(res >= 6)
  {
    std::cout << "Aluno Aprovado!\n";
    std::cout << "Sua nota: " << res;
  }else if(res >= 4)
  {
    std::cout << "Aluno esta de Recuperacao!\n";
    std::cout << "Sua nota: " << res;
  }else
  {
    std::cout << "Aluno Reprovado!\n";
    std::cout << "Sua nota: " << res;
  }

    std::cout << "\n Deseja digitar outra nota? \n [s/n] \n";
    std::cin >> opc;
    if(opc == 's' or opc =='S'){
    goto inicio;
    }
    return 0;
}