/*Formirati klasu bazen sa tri privatne promenljive. Klasa ima funkciju za dodeljivanje vrednosti i za izracunavanje zapremine. Formirati Zikin i Mikin bazen i odrediti ko ima veci bazen.*/



#include <iostream>
#include <stdio.h>


class bazen {
private:
    int duzina;
    int sirina;
    int dubina;
public:
    void dodela(int a, int b, int c){
        duzina = a;
        sirina = b;
        dubina = c;
    }
    int zapremina() const {
        return duzina * sirina * dubina;
    }
};

int main(int argc, const char * argv[]) {
    bazen zika, mika;
    int duz, sir, dub;
    
    printf("dimenzije zikinog bazena:\n");
    scanf("%d %d %d", &duz, &sir, &dub);
    zika.dodela(duz, sir, dub);
    
    printf("dimenzije mikinog bazena:\n");
    scanf("%d %d %d", &duz, &sir, &dub);
    mika.dodela(duz, sir, dub);
    
    zm=mika.zapremina();
    zz=zika.zapremina();
    
    if (zz>zm) printf("\nzika ima veci bazen.\n");
    else if (zm>zz) printf("\nmika ima veci bazen.\n");
    else printf("\nbazeni su iste zapremine.\n");
    
    return EXIT_SUCCESS;
}



