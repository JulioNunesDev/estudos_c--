#include <vector>
#include <iostream>
using namespace std;
int main ( )
{
    vector<string> produtos = {"mouse", "teclado", "gabinete", "cx.som"};
    vector<string>::iterator it;


    for(it=produtos.begin(); it != produtos.end(); it++){
    cout << *it << endl;
    }



    return 0;
}