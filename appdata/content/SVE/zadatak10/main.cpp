/*Formirati strukturu radnik koja ima podatke o broju radnih sati i ceni po satu. Formiramo dva radnika Miku i Ziku i ucitavamo podatke za njih. Odrediti koji radnik ima vecu platu.*/



#include <iostream>
#include <stdio.h>

struct radnik {
    float br_sati, cenaposatu;
};

int main(int argc, const char * argv[]) {
    radnik zika, mika;
    float zp, mp;
    printf("Uneti Zikinu platu i koliko sati je radio:\n");
    scanf("%f%f", &zika.cenaposatu, &zika.br_sati);
    printf("Uneti Mikinu platu i koliko sati je radio:\n");
    scanf("%f%f", &mika.cenaposatu, &mika.br_sati);
    mp=mika.br_sati*mika.cenaposatu;
    zp=zika.br_sati*zika.cenaposatu;
    if (mp>zp) printf("Mikina plata je veca.\n\n");
    else if (mp<zp) printf("Zikina plata je veca.\n\n");
    else printf("Imaju iste plate.\n\n");
    return EXIT_SUCCESS;
}
