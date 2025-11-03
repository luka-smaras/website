/*na disku postoji tekstualni fajl u kome je upisan tekst. procitati svaku rec teksta i upisti je u niz. ispisati sve reci na ekranu, svaka rec u posebnom redu*/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, const char * argv[]) {
    char reci [100][50];
    FILE *pok;
    pok=fopen("/podaci2.txt", "r");
    int breci=0;
    do {
        fscanf(pok, "%49s", reci[breci]);
        breci++;
    } while (feof(pok)==0);
    fclose(pok);
    for (int k=0; k<breci; k++) {
        printf("%s\n", reci[k]);
    }
    return EXIT_SUCCESS;
}
