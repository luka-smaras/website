/*Napraviti interfejs oblik koji definise funkciju za unos podataka i funkciju za racunanje povrsine. Zatim napraviti klasu pravougaonik koja ima implementiran interfejs. U main funkciji koristiti pokazivac na interfejs, dinamicki kreirati objekat klase pravougaonik, uneti podatke i ispisati povrsinu.*/

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
int main(int argc, const char * argv[]) {
    oblik* x=new pravougaonik();
    x->unos();
    cout<<"povrsina je: "<<x->povrsina();
    delete x;
    return EXIT_SUCCESS;
}
