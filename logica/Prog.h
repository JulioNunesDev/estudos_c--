#ifndef PROG_H_INCLUDED
#define PROG_H_INCLUDED
#include <iostream>
#include <stdlib.h> //system , NULL
#include <stdio.h> // PrintF
#include <fstream>
#include <exception>


using namespace std;

class Notepad{

public:
string nomeDir;
void dodirPc(string texto){
  nomeDir = texto;

  fstream arquivo;
  arquivo.open(nomeDir, ios::out);
  arquivo.close();




  cout << texto << endl;
}
private:


};

#endif