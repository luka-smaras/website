/*Korisnik unosi 2 real. broja. Uz pomoc funkcije za uporedjivanje brojeva odrediti koji je broj manji.*/



#include <iostream>
#include <stdio.h>

float manji(float x, float y){
    float rezultat;
    if (x>y) rezultat=y;
    else if(y>=x) rezultat=x;
    return rezultat;
}

int main(int argc, const char * argv[]) {
    float a, b;
    printf("uneti broj a:");
    scanf("%f", &a);
    printf("uneti broj b:");
    scanf("%f", &b);
    printf("manji broj je %f\n\n", manji(a, b));
    return EXIT_SUCCESS;
}
