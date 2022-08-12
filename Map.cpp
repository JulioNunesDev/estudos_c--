#include <iostream>
#include <map>
#include <utility>




using namespace std;
int main ( ){
    map<int, string> produto;
    produto.insert(pair<int, string>(0, "Arroz"));
    for (auto it:produto){
        cout << it.second << endl; 
    }


    return 0;
}