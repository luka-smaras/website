//ispisati prvih k parnih brojeva na ekranu



#include <iostream>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, k;
    printf("uneti vrednost K:");
    scanf("%d", &k);
    for(i=1; i<=k; i++) printf("%d\n", i*2);
    return EXIT_SUCCESS;
}
