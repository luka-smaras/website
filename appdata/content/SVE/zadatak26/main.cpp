/*Formirati binarni fajl koji sadrzi podatke o 10 celih random brojeva*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, const char * argv[]) {
    FILE* pok;
    int i, x;
    srand(time(0));
    pok=fopen("brojevi.bin", "wb");
    for (i=0; i<10; i++) {
        x=rand()%100+1;
        fwrite(&x, sizeof(x), 1, pok);
    }
    fclose(pok);
    i=1;
    pok=fopen("brojevi.bin", "rb");
    while (feof(pok)==0) {
        fread(&x, sizeof(x), 1, pok);
        if (feof(pok)==0) {
            printf("%d. clan je %d\n", i,x);
            i++;
        }
        fclose(pok);
    }
    return EXIT_SUCCESS;
}
