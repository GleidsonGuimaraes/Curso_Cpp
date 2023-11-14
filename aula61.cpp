// Map - Container de associação Chave x Valor
/*
    .clear(); // apaga todos os elementos do container map
*/

#include <iostream>
#include <map>

using namespace std;

int main(){

    // map<tipo_da_chave, tipo_do_valor> nome;
    map<int, string> prod;
    map<int, string>::iterator itmap;

    // prod[0] = "Mouse";
    // prod[1] = "Teclado";
    // prod[2] = "Monitor";
    // prod[3] = "Cx_de_som";

    prod.insert(pair<int, string>(0, "Mouse"));
    prod.insert(pair<int, string>(1, "Teclado"));
    prod.insert(pair<int, string>(2, "Monitor"));
    prod.insert(pair<int, string>(3, "Cx_de_som"));
    prod.insert(pair<int, string>(4, "Microfone"));
    prod.insert(pair<int, string>(5, "Gabinete"));
    prod.insert(pair<int, string>(6, "Camera"));

    for(auto it:prod){
        cout << it.first<< " - " << it.second << endl;
    }
    cout << endl;

    prod.erase(2); // apaga o elemento que possui a chave indicada no método e não a posição do elemento

    for(auto it:prod){
        cout << it.first<< " - " << it.second << endl;
    }
    cout << endl;

    itmap = prod.find(4);
    if(itmap == prod.end()){
        cout << "Produto nao encontrado." << endl;
    }else{
        cout << "Produto em estoque." << endl;
        cout << "Codigo: " << itmap->first << "   Produto: " << itmap->second << endl;
    }
    cout << endl;

    prod.erase(prod.begin(), prod.find(3));

    for(auto it:prod){
        cout << it.first<< " - " << it.second << endl;
    }
    cout << endl;

    return 0;
}