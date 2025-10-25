/*Koristeci istu klasu, formirati niz od 10 clanova ciji su elementi objekti klase krug. Niz popuniti random podacima za poluprecnik. Odrediti koji krug ima najveci obim i na kojoj lokaciji. Pre toga ispisati sve vrednosti u nizu.*/



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
    krug niz[10];
    float maxi = 0, x;
    int i, poz=0;
    
    srand(time(0));
    for (i=0; i<10; i++) {
        x=rand()%95+5;
        niz[i].dodela(x);
        printf("%d. krug ima poluprecnik %.2f", i+1, x);
        printf("obim= %.2f, povrsina= %.2f\n", niz[i].obim(), niz[i].povrs());
        if (niz[i].povrs()>maxi) {
            maxi=niz[i].povrs();
            poz=i;
        }
    }
    printf("\n\nnajveca povrsina je %.2f, na lokaciji %d.\n\n", maxi, poz);
    return EXIT_SUCCESS;
}
