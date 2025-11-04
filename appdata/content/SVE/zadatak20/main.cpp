//formirati listu koja sadrzi 10 celih brojeva. ispisati sadrzaj liste na ekranu



#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>
using namespace std;

int main(int argc, const char * argv[]) {
    list<int> brojevi;
    for (int i=1; i<10; i++) {
        brojevi.push_back(i*100);
    }
    printf("sadrzaj liste:\n");
    int z=1;
    list<int>::iterator k;
    for (k=brojevi.begin(); k!=brojevi.end(); ++k) {
        printf("%d. clan liste je %d\n", z, *k);
        z++;
    }
    k=brojevi.begin();
    advance(k, 2);
    printf("ovaj clan je %d\n", *k);
    advance(k, -2);
    printf("ovaj clan je %d\n", *k);
    brojevi.pop_back();
    brojevi.pop_front();
    k=brojevi.begin();
    advance(k, 3);
    brojevi.erase(k);
    z=1;
    for (k=brojevi.begin(); k!=brojevi.end(); ++k) {
        printf("%d. clan liste je %d\n", z, *k);
        z++;
    }
    
    return EXIT_SUCCESS;
}
