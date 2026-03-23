/*Napraviti apstraktnu klasu student koja ima virtuelne funkcije ucitavanje, prosek i ispis. Napraviti 2 izvedene klase osnovneStudije i masterStudije (osnovne ima 2 ocene, a master ima 3). Svaka klasa racuna prosek na svoj nacin.  U main funkciji korisnik bira tip studenta, pravi odgovarajuci objekat, unosi ocene i ispisuje prosek.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class student {
public:
    virtual void ucitavanje()=0;
    virtual float prosek()=0;
    virtual void ispis()=0;
};

class osnovneStudije:public student {
private:
    float a, b;
public:
    void ucitavanje(){
        cout<<"uneti prvu ocenu: ";
        cin>>a;
        cout<<"uneti drugu ocenu: ";
        cin>>b;
    }
    float prosek(){
        return (a+b)/2;
    }
    void ispis(){
        cout<<"prosek ocena je: "<<prosek();
    }
};
class masterStudije:public student {
private:
    float a, b, c;
public:
    void ucitavanje(){
        cout<<"uneti prvu ocenu: ";
        cin>>a;
        cout<<"uneti drugu ocenu: ";
        cin>>b;
        cout<<"uneti trecu ocenu: ";
        cin>>c;
    }
    float prosek(){
        return (a+b+c)/3;
    }
    void ispis(){
        cout<<"prosek ocena je: "<<prosek();
    }
};
int main(int argc, const char * argv[]) {
    int izbor;
    cout<<"izabrati tip studija:\n";
    cout<<"1 - osnovne studije\n";
    cout<<"2 - master studije\n";
    cin>>izbor;
    if (izbor==1) {
        osnovneStudije stud;
        stud.ucitavanje();
        stud.ispis();
    }
    if (izbor==2) {
        masterStudije stud;
        stud.ucitavanje();
        stud.ispis();
    }
    return EXIT_SUCCESS;
}

