// algoritimo for_each

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int>n{0,1,2,3,4,5,6,7,8,9};

    for(auto it:n){
        cout << it << endl;
    }
    cout << endl;

    // funciona como uma função que recebe três parâmetros
    /*
        O primeiro parâmetro recebe a posição inicial da estrutura que será percorrida
        O segundo parâmetro recebe a posição final da estrutura que será percorrida
        O terceiro parâmetro recebe uma função que irá tratar cada um dos elementos passados 
            pelos parâmetros anteriores.
            Obs: O algorítimo for_each não altera os valores da estrutura passada.
    */
    for_each(n.begin(), n.end(), [](int num){
        cout << num << endl;
    });

    return 0;
}