/*Na disku postoje 2 tekstualna fajla, u svakom po 10 brojeva, prvi broj iz prvog fajla sabrati sa prvim iz drugog i tako do 10-og broja. Zbir upisati u treci fajl i na ekranu*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, const char * argv[])
{
    FILE *pok;
    FILE *pok2;
    pok=fopen("podaci4.txt","w");
    srand(time(0));
    int x;
    for(int i =0;i<10;i++)
    {
        x=rand()%100;
        fprintf(pok,"%d\n",x);
    }
    fclose(pok);
    pok2=fopen("podaci3.txt","w");
    srand(time(0));
    int y;
    for(int i =0;i<10;i++)
    {
        y=rand()%100;
        fprintf(pok2,"%d\n",y);
    }
    fclose(pok2);
    pok=fopen("podaci4.txt","r");
    pok2=fopen("podaci3.txt","r");
    FILE *pok3;
    pok3=fopen("podaci5.txt","w");
    do
    {
        fscanf(pok,"%d",&x);
        fscanf(pok2,"%d",&y);
        if(feof(pok)==0)
        {
            printf("%d\n",x+y);
            fprintf(pok3,"%d\n",x+y);
        }
    }
    while(feof(pok)==0);
    return EXIT_SUCCESS;
}
