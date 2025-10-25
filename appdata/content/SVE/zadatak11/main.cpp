/*Formirati struct "njiva" koja ima duzinu i sirinu. Niz ima 30 njiva
 random popunjenih. Na kojoj poziciji je najmanja njiva?*/


#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

struct njiva {
    int duz;
    int sir;
};

int main(int argc, const char * argv[]) {
    srand(time(0));
    njiva niz[10];
    int i, p, lok=0;
    float maxi=0;
    for (i = 0; i < 10; ++i) {
        niz[i].duz=rand() % 45+5;
        niz[i].sir=rand() % 90+10;
        p = niz[i].duz * niz[i].sir;
        printf("%d. njiva, povrsina= %d\n", i+1, p);
        if (p > maxi) {
            maxi = p;
            lok= i+1;
        }
    }
    
     printf("\n\nnajveca njiva se nalazi na lokaciji %d, sa povrsinom %.2f ari\n\n",lok, maxi/100);
     return EXIT_SUCCESS;
}

