#include <iostream>

using namespace std;

extern int num; // uso da classe "extern"

int valor{100};

void impNum(){
    cout << num << endl;
}