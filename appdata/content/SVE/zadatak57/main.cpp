/* Napraviti apstraktnu klasu radnik koja ima virtuelne funkcije ucitavanje, plata i ispis. Napraviti 2 izvedene klase prodavac i menadzer. Prodavac ima platu koja se racuna sati*cena, a menadzer sati*cena i na tu platu se dodaje procenat.  U main funkciji korisnik bira tip radnika, pravi odgovarajuci objekat, unosi podatke i ispisuje.*/

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
};

class prodavac:public radnik {
private:
    float rs, cps;
public:
    void ucitavanje(){
        cout<<"uneti broj radnih sati: ";
        cin>>rs;
        cout<<"uneti cenu po satu: ";
        cin>>cps;
    }
    float plata(){
        return rs*cps;
    }
    void ispis(){
        cout<<"plata je: "<<plata();
    }
};
class menadzer:public radnik {
private:
    float rs, cps, proc;
public:
    void ucitavanje(){
        cout<<"uneti broj radnih sati: ";
        cin>>rs;
        cout<<"uneti cenu po satu: ";
        cin>>cps;
        cout<<"uneti procenat: ";
        cin>>proc;
    }
    float plata(){
        return rs*cps+rs*cps*proc/100;
    }
    void ispis(){
        cout<<"prosek ocena je: "<<plata();
    }
};
int main(int argc, const char * argv[]) {
    int izbor;
    cout<<"izabrati profesiju:\n";
    cout<<"1 - prodavac\n";
    cout<<"2 - menadzer\n";
    cin>>izbor;
    if (izbor==1) {
        prodavac rad;
        rad.ucitavanje();
        rad.ispis();
    }
    if (izbor==2) {
        menadzer rad;
        rad.ucitavanje();
        rad.ispis();
    }
    return EXIT_SUCCESS;
}
