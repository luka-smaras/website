/*44. Program postavljka pitanje koliko korisnik ima godina. Uz pomoc funkcije provera generise se izuzetak ako korisnik ima manje od 18 godina*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void provera(int u){
    if(u<18) throw 0;
}
int main(int argc, const char * argv[]) {
    int godine;
    cout<<"koliko imas godina: ";
    cin>>godine;
    try {
        provera(godine);
        cout<<"dozvoljen pristup.";
    }
    catch (int pp) {
        if (pp==0) cout<<"zabranjen pristup";
    }
    return EXIT_SUCCESS;
}
