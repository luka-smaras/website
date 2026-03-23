/*Definisati klasu automobil koja ima javne promenljive put i potrosnja i funkciju koja izracunava koliko goriva se potrosi. Klasa ima static promenljivu cena goeiva.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class automobil {
public:
    static float cenagor;
    float put, potrosnja;
    float izracunaj(){
        return put/potrosnja/100;
    }
};
float automobil::cenagor=187;
int main(int argc, const char * argv[]) {
    automobil pezo, punto, skoda;
    printf("Unesite put i potrosnju za pezo, punto, pa skodu:\n");
    scanf("%f%f",&pezo.put, &pezo.potrosnja);
    scanf("%f%f",&punto.put, &punto.potrosnja);
    scanf("%f%f",&skoda.put, &skoda.potrosnja);
    float p1=pezo.izracunaj()/pezo.cenagor;
    float p2=punto.izracunaj()/punto.cenagor;
    float p3=skoda.izracunaj()/skoda.cenagor;
    if(p1<p2&&p1<p3) printf("\npezo trosi najmanje\n");
    if(p2<p1&&p2<p3) printf("\npunto trosi najmanje\n");
    if(p3<p1&&p3<p2) printf("\nskoda trosi najmanje\n");
    return EXIT_SUCCESS;
}
