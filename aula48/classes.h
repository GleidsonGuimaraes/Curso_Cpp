#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;

class Base1{ // classe pai
    public:
        void impBase1();
    private:

};

void Base1::impBase1(){
    cout << "Imp classe Base1." << endl;
    cout << endl;
}

class Base2{ // classe pai
    public:
        void impBase2();
    private:

};

void Base2::impBase2(){
    cout << "Imp classe Base2." << endl;
    cout << endl;
}

class CFB:public Base1, public Base2{ // classe filho com herança múltipla 
    public:

    private:
    
};

#endif // CLASSES_H_INCLUDED