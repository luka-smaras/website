/* Formirati klasu krug koja implamentira interfejs. U main funkciji dozvoliti korisniku da bira da li ce se formirati objekat pravougaonik ili krug. Ucitati podatke i ispisati povrsinu.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class oblik {
public:
    virtual void unos()=0;
    virtual float povrsina()=0;
    virtual ~oblik(){}
};
class pravougaonik:public oblik {
private:
    float x, y;
public:
    void unos() override{
        cout<<"Uneti sirinu: ";
        cin>>x;
        cout<<"Uneti duzinu: ";
        cin>>y;
    }
    float povrsina() override{
        return x*y;
    }
};
class krug:public oblik {
private:
    float r;
public:
    void unos() override{
        cout<<"Uneti poluprecnik: ";
        cin>>r;
    }
    float povrsina() override{
        return r*r*3.14;
    }
};
int main(int argc, const char * argv[]) {
    oblik* x=NULL;
    int izbor;
    cout<<"izabrati oblik:\n";
    cout<<"1 - pravougaonik\n";
    cout<<"2 - krug\n";
    cin>>izbor;
    if (izbor==1) {
        x=new pravougaonik();
    }
    if (izbor==2) {
        x=new krug();
    }
    x->unos();
    cout<<"povrsina iznosi: "<<x->povrsina();
    return EXIT_SUCCESS;
}

