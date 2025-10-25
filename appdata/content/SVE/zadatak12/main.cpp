/*Deda sprema drva za zimu, cepanice su u obliku valjka. Za svaku cepanicu deda je izmerio duzinu i precnik. Formirati strukturu cepanica i niz koji sadrzi podatke za 1000 cepanica. Dimenzije su u cm a odrediti koliko kubnih metara je spremno. (duziana i precnik su random)*/



#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct cepanica {
    float h, R;
};

int main(int argc, const char * argv[]) {
    int i;
    float r, s=0;
    cepanica niz[1000];
    srand(time(0));
    
     for (i=0; i<1000; ++i) {
        niz[i].h=rand()%90+10;
        niz[i].R=rand()%45+5;
        r=niz[i].R/2;
        s+=3.14*r*r*niz[i].h;
     }

    printf("\nukupno drva: %.2fm^3.\n", s/1000000);

    return EXIT_SUCCESS;
}



