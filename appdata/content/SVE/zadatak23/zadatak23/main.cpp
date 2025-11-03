/*formirati tekstualni fajl koji sadrzi 10 celih brojeva koji su random upisani*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    FILE *pok;
    srand(time(0));
    
    pok=fopen("podaci.txt", "w");
    int x;
    for (int i=0; i<10; i++) {
        x=rand()%100;
        fprintf(pok, "%d\n", x);
    }
    fclose(pok);
    
    pok=fopen("podaci.txt", "a");
    x=555;
    fprintf(pok, "%d\n", x);
    fclose(pok);
    
    pok=fopen("podaci.txt", "r+");
    fseek(pok, 2*sizeof(int), SEEK_SET);
    x=9999;
    fprintf(pok, "%d\n", x);
    fclose(pok);
    
    pok=fopen("podaci.txt", "r");
    do{
        fscanf(pok, "%d", &x);
        if (feof(pok)==0) printf("%d\n", x);
    }while(feof(pok)==0);
    x=9999;
    fprintf(pok, "%d\n", x);
    fclose(pok);
    return EXIT_SUCCESS;
}
