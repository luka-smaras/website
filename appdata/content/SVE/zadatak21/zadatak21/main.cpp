/*Nema teksta*/


#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <list>
using namespace std;

struct tacka{
    int x,y;
};

int main(int argc, const char * argv[]) {
    list<tacka> tacke;
    tacka element;
    for (int i=1; i<=10; i++) {
        element.x=i*10;
        element.y=i*20;
        tacke.push_back(element);
    }
    printf("sadrzaj liste:\n");
    int z=1;
    list<tacka>::iterator r;
    r=tacke.begin();
    for(r=tacke.begin();r!=tacke.end();++r){
        element=*r;
        printf("%d. tacka ima koordinate: %d i %d\n", z, element.x, element.y);
        z++;
    }
    r=tacke.begin();
    advance(r,4);
    element=*r;
    printf("\n\n %d i %d\n\n", element.x, element.y);
    element.x=123;
    element.y=456;
    *r=element;
    advance(r, 2);
    tacke.erase(r);
    element.x=111;
    element.y=888;
    tacke.push_back(element);
    z=1;
    for(r=tacke.begin();r!=tacke.end();r++){
        element=*r;
        printf("%d. tacka ima koordinate %d i %d\n", z, element.x, element.y);
        z++;
    }
    return EXIT_SUCCESS;
}
