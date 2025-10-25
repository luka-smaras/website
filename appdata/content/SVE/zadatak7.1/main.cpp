//Odrediti najveci broj u dobijenom nizu.



#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    int x[10], i, maxi=0;
    srand(time(0));
    for (i=0; i<10; i++) {
        x[i]=rand()%1000;
        if (x[i]>maxi) {
            maxi=x[i];
        }
    }
    for (i=0; i<10; i++) {
        printf("%d\n", x[i]);
        
    }
    
    printf("Najveci broj u nizu je:%d\n\n", maxi);
    
    return EXIT_SUCCESS;
}
