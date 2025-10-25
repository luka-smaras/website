/*Formirati struct "voz" koja ima podatke o broju vagona i o broju putnika po vagonu. Korisnik ucitava podatke o 2 voza, Cira i Spira. Uz pomoc posebne funkcije odrediti koji voz moze da primi vise putnika*/



#include <iostream>
#include <stdio.h>

int ukupno(int x, int y){
    return x*y;
}
struct voz {
    int vagoni, putnici;
};
int main(int argc, const char * argv[]) {
    voz cira, spira;
    printf("Uneti broj vagona i broj putnika za Ciru:\n");
    scanf("%d%d", &cira.vagoni, &cira.putnici);
    printf("Uneti broj vagona i broj putnika za Spiru:\n");
    scanf("%d%d", &spira.vagoni, &spira.putnici);
    if (ukupno(cira.putnici, cira.vagoni)>ukupno(spira.putnici, spira.vagoni)) {
        printf("Cira ima vise putnika.\n\n");
    }
    else if (ukupno(cira.putnici, cira.vagoni)<ukupno(spira.putnici, spira.vagoni)) {
        printf("Spira ima vise putnika.\n\n");
    }
    else printf("Imaju isti broj putnika\n\n");
    return EXIT_SUCCESS;
}
