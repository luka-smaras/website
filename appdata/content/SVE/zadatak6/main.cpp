//Korisnik ucitava n realnih brojeva. Ispisati njihovu srednju vrednost.



#include <iostream>
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int i, n;
    float s=0, k;
    printf("\nuneti broj n:");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        printf("Uneti %d. broj:", i);
        scanf("%f", &k);
        s+=k;
    }
    printf("\n\nsrednja vrednost je %.2f.\n\n", s);
    return EXIT_SUCCESS;
}
