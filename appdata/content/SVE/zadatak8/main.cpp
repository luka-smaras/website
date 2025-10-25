/*Formirati struct "bazen" koja ima podatke o duzini, sirini i dubini. Formiramo 2 promenljive tipa bazen (Zikin i Mikin), unosimo podatke i odredjujemo ko ima veci bazen*/



#include <iostream>
#include <stdio.h>

struct bazen {
    int duz, sir, dub;
};

int main(int argc, const char * argv[]) {
    int zb, mb;
    radnik zika, mika;
    printf("uneti dimenzije zikinog bazena:\n");
    scanf("%d%d%d", &zika.duz, &zika.sir, &zika.dub);
    printf("uneti dimenzije mikinog bazena:\n");
    scanf("%d%d%d", &mika.duz, &mika.sir, &mika.dub);
    
    zb=zika.duz*zika.sir*zika.dub;
    mb=mika.duz*mika.sir*mika.dub;
    if (mb>zb) printf("mikin bazen je veci.\n\n");
    else if (mb<zb) printf("zikina bazen je veci.\n\n");
    else printf("imaju istu velicinu bazena.\n\n");
    return EXIT_SUCCESS;
}
