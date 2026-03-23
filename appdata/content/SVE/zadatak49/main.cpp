/*Korisnik ucitava po 3 broja u while petlji. Uz pomoc funkcije za sabiranje brojeva na zbir se dodaje onaj broj koji je najmanji. Ukoliko korisnik unese sva tri ista broja generise se izuzetaki sabiranje se prekida i na ekranu se ispisuje trenutni zbir.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;


int sabiranje(int z, int b, int b1, int b2){
    if((b==b1)&&(b==b2)) throw 1;
    if((b>b1)&&(b>b2)) z+=b;
    else if((b1>b)&&(b1>b2)) z+=b1;
    else if((b2>b1)&&(b2>b)) z+=b2;
    return z;
}
int main(int argc, const char * argv[]) {
    int zbir=0, broj, broj2, broj3;
    while (true) {
        try {
            cout<<"uneti broj: ";
            cin>>broj;
            cout<<"uneti drugi broj: ";
            cin>>broj2;
            cout<<"uneti treci broj: ";
            cin>>broj3;
            zbir=sabiranje(zbir, broj, broj2, broj3);
        } catch (int exc) {
            if (exc==1) cout<<"uneti su isti brojevi\n zbir= "<<zbir; break;
        }
    }
    return EXIT_SUCCESS;
}
