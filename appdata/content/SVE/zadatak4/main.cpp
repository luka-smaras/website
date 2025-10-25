/*Korisnik unosi ceo broj k. Potrebno je ispisati
 na ekranu prvih n brojeva koji su deljivi sa brojem k.*/



#include <iostream>
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int i, n, k;
    printf("uneti vrednost N:");
    scanf("%d", &n);
    printf("uneti vrednost K:");
    scanf("%d", &k);
    for(i=1;i<=n;i++)
        printf("%d\n", i*k);
    return EXIT_SUCCESS;
}
