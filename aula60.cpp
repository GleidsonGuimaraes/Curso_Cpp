// Conteiner pair - Dados em pares

#include <iostream>
#include <utility> // biblioteca para utilizar o conteiner pair
#include <vector>

using namespace std;

int main(){

    auto tam = 3;

    // formas de atribuir dados ao pair
    pair <int, string> par(10, "Gleidson");
    // par.first = 100;
    // par.second = "CFB Cursos";
    cout << par.first << " - " << par.second << "\n\n";

    pair <int, string> arrayPar[tam]; // utilizando pair em array
    arrayPar[0] = make_pair(10,"Bruno");
    arrayPar[1] = make_pair(20,"Curso de C++");
    arrayPar[2] = make_pair(30,"CFB Cursos");
    for(int i=0; i<tam; i++){
        cout << arrayPar[i].first << " - " << arrayPar[i].second << endl;
    }
    cout << endl;

    pair <int, pair<string, double>> produtos[tam]; // passando um pair como tipo de dados dentro de outro pair
    produtos[0] = make_pair(1, make_pair("Mouse", 10.5));
    produtos[1] = make_pair(2, make_pair("Teclado", 25.8));
    produtos[2] = make_pair(3, make_pair("Monitor", 200.1));
    for(int i=0; i<tam; i++){
        cout << produtos[i].first << " - " << produtos[i].second.first << " - " << produtos[i].second.second << endl;
    }
    cout << endl;

    vector<pair<int, string>> carros; // utilizando pair em vector
    carros.push_back (make_pair(135,"Chevette"));
    carros.push_back (make_pair(185,"Gol"));
    carros.push_back (make_pair(200,"Xr3"));
    for(auto i:carros){
        cout << i.first << " - " << i.second << endl;
    }

    return 0;
}