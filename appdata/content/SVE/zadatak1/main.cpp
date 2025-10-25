//ispisati na ekranu cele brojeve izmedju k i n.


#include <iostream>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, n, k;
    printf("uneti vrednost K:");
    scanf("%d", &k);
    printf("uneti vrednost N:");
    scanf("%d", &n);
    
    for(i=k+1;i<n;i++) printf("%d\n", i);
    return EXIT_SUCCESS;
}
