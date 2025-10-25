/*Formirati niz duzine 10 clanova koji sadrzi podatke o bazenima. Sve dimenzije su random brojevi. Odrediti zapreminu najveceg bazena*/



#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

struct bazen {
    int duzina;
    int sirina;
    int dubina;
};

int main(int argc, const char * argv[]) {
    int i, v, maxi=0;
    bazen niz[10];
    srand(time(0));
    for (i=0; i<10; i++) {
        niz[i].duzina=rand() % 10+5;
        niz[i].sirina=rand() % 6+4;
        niz[i].dubina=rand() % 3+2;
        v=niz[i].duzina*niz[i].sirina*niz[i].dubina;
        if (v>maxi) {
            maxi=v;
        }
        printf("zapremina %d. bazena je %dm^3.\n", i + 1, v);
    }
    printf("\n\nzapreimina najveceg bazena je %d.\n\n", maxi);
    return EXIT_SUCCESS;
}

