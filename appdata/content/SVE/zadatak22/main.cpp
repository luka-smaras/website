/*formirati listu koja sadrzi listu koja sadrzi 10 elemenata strukture. struktura sadrzi ocene iz srpskog, matematike i fizickog. sve ocene se generisu random. kadase lista popuni ispisati je na ekranu. odrediti ko ima najveci prosek i na kom se mestu nalazi clan*/



#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <list>
using namespace std;

struct ocena{
    int srp, mat, fiz;
    float avg;
};

int main(int argc, const char * argv[]) {
    float maxi=0;
    int poz = 0;
    list<ocena>ocene;
    ocena ucenik;
    srand(time(0));
    for(int i=0; i<=10;i++){
        ucenik.srp=rand()%5+1;
        ucenik.mat=rand()%5+1;
        ucenik.fiz=rand()%5+1;
        ucenik.avg=float(ucenik.srp+ucenik.mat+ucenik.fiz)/3;
        ocene.push_back(ucenik);
    }
    list<ocena>::iterator r;
    int j=1;
    for (r=ocene.begin(); r!=ocene.end(); r++) {
        ucenik=*r;
        printf("%d. ucenik=\n\tsrp=%d\n\tmat=%d\n\tfiz=%d\n\tPROSEK=%.2f\n", j, ucenik.srp, ucenik.mat, ucenik.fiz, ucenik.avg);
        if (ucenik.avg>maxi) {
            maxi=ucenik.avg;
            poz=j;
        }
        j++;
    }
    printf("\nUcenik sa najvecim prosekom je na mestu %d ima prosek %.2f", poz, maxi);
    return EXIT_SUCCESS;
}
