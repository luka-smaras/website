/*Formirati niz celih brojeva koji sadrzi 10 clanova.
 Niz poputiti slucajnim brojevima. Niz ispisati na ekranu.*/



#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    int x[10], i;
    srand(time(0));
    for (i=0; i<10; i++) {
        x[i]=rand();
    }
    for (i=0; i<10; i++) {
        printf("%d\n", x[i]);
    }
    return EXIT_SUCCESS;
}
