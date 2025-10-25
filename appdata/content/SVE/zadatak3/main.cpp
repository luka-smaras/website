/*Korisnik ucitava ceo broj k. Ako je broj paran, ispisati
 prvih 10 brojeva posle broja k. Ako je broj neparan, ispisemo
 poruku "Broj je neparan".*/



#include <iostream>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, k;
    printf("uneti ceo broj:");
    scanf("%d", &k);
    if(k%2) printf("\nBroj je neparan\n\n");
    else
        for(i=k+1;i<=k+10; i++) printf("%d\n", i);
    return EXIT_SUCCESS;
}
