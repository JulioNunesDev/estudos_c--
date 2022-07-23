#include <iostream>

int main ( )
{
   int numeros[3][3];
    int l,c;

    for(l = 0; l < 3; l++)
    {
        for( c = 0; c < 3; c++)
        {   
             numeros[l][c] = l;
        }
    }


    return 0;
}