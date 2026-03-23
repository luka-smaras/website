/*Realizovati zadatak sa menadzerom i prodavcem tako sto ce se napraviti interfejs, izbor 1 i 2 i racunati plata za jednog ili drugog.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class radnik {
public:
    virtual void ucitavanje()=0;
    virtual float plata()=0;
    virtual void ispis()=0;
    virtual ~radnik(){}
};

class prodavac:public radnik {
private:
    float rs, cps;
public:
    void ucitavanje() override{
        cout<<"uneti broj radnih sati: ";
        cin>>rs;
        cout<<"uneti cenu po satu: ";
        cin>>cps;
    }
    float plata() override{
        return rs*cps;
    }
    void ispis() override{
        cout<<"plata je: "<<plata();
    }
};
class menadzer:public radnik {
private:
    float rs, cps, proc;
public:
    void ucitavanje() override{
        cout<<"uneti broj radnih sati: ";
        cin>>rs;
        cout<<"uneti cenu po satu: ";
        cin>>cps;
        cout<<"uneti procenat: ";
        cin>>proc;
    }
    float plata() override{
        return rs*cps+rs*cps*proc/100;
    }
    void ispis() override{
        cout<<"prosek ocena je: "<<plata();
    }
};
int main(int argc, const char * argv[]) {
    radnik* x=NULL;
    int izbor;
    cout<<"izabrati profesiju:\n";
    cout<<"1 - prodavac\n";
    cout<<"2 - menadzer\n";
    cin>>izbor;
    if (izbor==1) {
        x=new prodavac();
    }
    if (izbor==2) {
        x=new menadzer();
    }
    x->ucitavanje();
    x->ispis();
    delete x;
    return EXIT_SUCCESS;
}

