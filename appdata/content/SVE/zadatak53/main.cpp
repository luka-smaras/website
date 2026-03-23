/*Formirati glavnu klasu bankovniracun koja ima podatke za stanje, funkciju za uplatu, funkciju isplata, funkciju za ispis stanja. Kreirati izvedenu klasu devizniracun koja ima dodatni podatak kurs i funkciju ispisstanjaeur. U main funkciji kreirati objekat bankovniracun i devizniracun, izvrsiti uplate u petlji while sve dok iznos uplate nije 0. Kako se koja uplata izvrsi, program ispisuje stanje i jednog i drugog racuna.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class bankovniracun{
protected:
    float stanje=0;
public:
    void uplata(float iznos){
        stanje=iznos+stanje;
    }
    void isplata(float iznos){
        stanje=stanje-iznos;
    }
    void ispis(){
        cout<<"\nTrenutno stanje : "<<stanje<<"\n";
    }
    float ispis(int a){
        return stanje;
    }
};
class devizniracun:public bankovniracun{
public:
    float kurs;
    void ispisstanjaueur(){
        cout<<"\nU evrima je : "<<stanje/kurs<<"\n";
    }
};
int main(int argc, const char * argv[]){
    bankovniracun A;
    devizniracun B;
    A.isplata(200.67);
    B.isplata(200.67);
    B.kurs=109;
    do{
        float priv;
        cin>>priv;
        A.uplata(priv);
        B.uplata(priv);
        A.ispis();
        B.ispisstanjaueur();
    }while(A.ispis(1)!=0);
    return EXIT_SUCCESS;
}

