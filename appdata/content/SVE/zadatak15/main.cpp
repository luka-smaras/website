/*Formirati klasu cetvorougao. Klasa ima privatne promenljive duzinu i sirinu i javne funkcije (za dodeljivanje vrednosti i izracunavanje povrsine). Definisati element klase, ucitati duzinu i sirinu i izracunati povrsinu.*/



#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class cetvorougao{
private:
    int duzina, sirina;
public:
    void dodeljivanje(int a, int b){
        duzina = a;
        sirina = b;
    }
    int povrsina(){
        return duzina*sirina;
    }
};
int main(int argc, const char * argv[]) {
    cetvorougao z;
    int tmp1, tmp2;
    printf("Unesi sirinu:");
    scanf("%d", &tmp1);
    printf("Unesi duzinu:");
    scanf("%d", &tmp2);
    z.dodeljivanje(tmp1, tmp2);
    printf("povrsina iznosi %d.\n\n", z.povrsina());
    return EXIT_SUCCESS;
}
