/*Formirati tekstualni fajl koji u svakom redu sadrzi podatke o broju radnih sati i cenu po satu za 10 radnika. Formirati drugi tekstualni fajl koji sadrzi podatke o platama radnika i ispisati ih na ekranu*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    FILE *pok;
    FILE *rok;
    pok=fopen("sati.txt", "w");
    srand(time(0));
    int x, y, z, i;
    for (i=0; i<10; i++) {
        x=rand()%200;
        y=rand()%200;
        fprintf(pok, "%d    %d\n", x,y);
    }
    fclose(pok);
    pok=fopen("plate.txt", "r");
    rok=fopen("plate.txt", "w");
    i=1;
    do {
        fscanf(pok, "%d%d", &x, &y);
        z=x*y;
        fprintf(rok, "%d\n", z);
        printf("%d. radnik ima platu %d\n", i, z);
        i++;
    } while (feof(pok)==0);
    fclose(pok);
    fclose(rok);
    return EXIT_SUCCESS;
}
