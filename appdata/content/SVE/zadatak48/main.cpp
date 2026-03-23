/*Korisnik ucitava parove brojeva u while petlji. Uz pomoc f-je za sabiranje brojeva na zbir se dodaje veci broj. Ukoliko korisnik unese dva ista broja generise se izuzetak i sabiranje se prekida.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int sabiranje(int z, int b, int b1){
    if(b==b1) throw 1;
    if(b>b1) z+=b;
    else z+=b1;
    return z;
}
int main(int argc, const char * argv[]) {
    int zbir=0, broj, broj2;
    while (true) {
        try {
            cout<<"uneti broj: ";
            cin>>broj;
            cout<<"uneti drugi broj: ";
            cin>>broj2;
            zbir=sabiranje(zbir, broj, broj2);
        } catch (int exc) {
            if (exc==1) cout<<"uneti su isti brojevi\n zbir= "<<zbir; break;
        }
    }
    return EXIT_SUCCESS;
}
