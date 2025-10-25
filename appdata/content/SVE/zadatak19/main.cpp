/*Formirati klasu "drvo". Privatne promenljive su poluprecnik i duzina. Javne su dodeli, povrs i zapremina. Formirati niz duzine 20 popunjen random brojevima. Odrediti ukupnu zapreminu svih stabala u nizu. NAPOMENA! : drvo ima oblik valjka, pa tako racunati povrsinu i zapreminu.*/



#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class drvo{
private:
    float pp, duzina;
public:
    void dodeli(int x, int y){
        pp=x;
        duzina=y;
    }
    float zapremina(){
        return pp*pp*3.14*duzina;
    }
    float povrsina(){
        return 2*pp*pp*3.14+2*pp*3.14*duzina;
    }
};

int main(int argc, const char * argv[]) {
    drvo niz[20];
    int i, temp1, temp2;
    float s=0;
    srand(time(0));
    for (i=0; i<20; i++) {
        temp1=rand()%45+5;
        temp2=rand()%750+150;
        niz[i].dodeli(temp1, temp2);
        printf("drvo br %d, r=%d, P=%.2f, V=%.2f\n\n", i+1, temp1, niz[i].povrsina(), niz[i].zapremina());
        s+=niz[i].zapremina();
    }
    printf("\n\nUkupna zapremina svog drveca iznosi %.2fm^3.\n\n", s/1000000);
    return EXIT_SUCCESS;
}
