/*Korisnik unosi brojeve k i n. Potrebno je odrediti zbir svih brojeva izmedju k i n.*/



#include <iostream>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, n, k, s=0;
    printf("uneti vrednost K:");
    scanf("%d", &k);
    printf("uneti vrednost N:");
    scanf("%d", &n);
    for(i=k+1;i<n;i++) s+=i;
    printf("\nZbir brojeva je: %d\n", s);
    return EXIT_SUCCESS;
}
