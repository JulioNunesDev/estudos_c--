#include <iostream>
#include "Prog.h"
#include <stdlib.h>

using namespace std;

int main () {
    Notepad *pad = new Notepad();
    pad->dodirPc("teste");
    int i;

    i = system("dir");
    for (int cl = 0; cl < i; cl++ ){
        cout << i << endl;
    }
 

    return 0;
}