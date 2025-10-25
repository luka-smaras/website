/*Definisati klasu krug koja ima privatnu promenljivu poluprecnik i tri javne funkcije(za dodeljivanje vrednosti, izracunavanje obima i povrsine). Definisati dva objekta, uneti poluprecnike i odrediti koji ima vecu povrsinu.*/



#include <iostream>
#include <stdio.h>

class krug{
private:
    float poluprecnik;
public:
    void dodela(float x){
        poluprecnik=x;
    }
    float obim(){
        return 2*poluprecnik*3.14;
    }
    float povrs(){
        return poluprecnik*poluprecnik*3.14;
    }
};
int main(int argc, const char * argv[]) {
    krug prvi, drugi;
    float r1, r2;
    printf("Uneti prvi i drugi broj:\n");
    scanf("%f%f", &r1, &r2);
    prvi.dodela(r1);
    drugi.dodela(r2);
    printf("Povrsina prvog kruga je %.2f, a drugog je %.2f", prvi.povrs(), drugi.povrs());
    if (prvi.povrs()>drugi.povrs()) printf("\n\nPrvi krug je veci.\n\n");
    else if (prvi.povrs()<drugi.povrs()) printf("\n\nDrugi krug je veci.\n\n");
    else printf("Krugovi su iste povrsine.\n\n");
    
    return EXIT_SUCCESS;
}
