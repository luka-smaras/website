/*Formirati klasu 'primer' koja ima jednu static promenljivu i funkciju brojac. Svaka static promenljiva mora se inicijalizovati pre pocetka programa (mora imati pocetnu vrednost).*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

class primer {
public:
    static int broj;
    void brojac(){
        broj++;
    }
};
int primer::broj=10;
int main(int argc, const char * argv[]) {
    primer a, b;
    printf("\nbroj je: %d", a.broj);
    printf("\nbroj je: %d", b.broj);
    a.brojac();
    printf("\nbroj je: %d", a.broj);
    printf("\nbroj je: %d", b.broj);
    b.brojac();
    printf("\nbroj je: %d", a.broj);
    printf("\nbroj je: %d", b.broj);
    return EXIT_SUCCESS;
}
