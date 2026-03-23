/*Napraviti klasu radnik koja ima ime, osnovnu platu, funkciju za unos podataka i funkciju za ispis podataka. Napraviti izvedenu klasu menadzer koja nasledjuje klasu radnik i dodatno sadrzi bonus, funkciju koja racuna ukupnu platu i funkciju za ispis ukupne plate. U main funkciji kreirati objekat klase menadzer, uneti podatke, ispisati ime i ukupnu platu.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class radnik {
protected:
    char ime[50];
    float plata;
public:
    void unos(){
        cout<<"uneti ime radnika: ";
        scanf("%49[^\n]", ime);
        cout<<"uneti platu radnika: ";
        cin>>plata;
    }
    void printpod(){
        cout<<"radnik: "<<ime;
        cout<<"plata: "<<plata;
    }
};
class menadzer:public radnik{
protected:
    int bonus, ukupno;
public:
    void platacalc(){
        cout<<"uneti bonus radnika: ";
        cin>>bonus;
        ukupno=plata+bonus;
    }
    void ispis(){
        cout<<"ukupna plata je: "<<ukupno;
    }
};
int main(int argc, const char * argv[]) {
    menadzer x;
    x.unos();
    x.platacalc();
    x.printpod();
    x.ispis();
    return EXIT_SUCCESS;
}
