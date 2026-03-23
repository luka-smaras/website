/*Formirati tekstualni fajl koji u svakom redu sadrzi 7 celih brojeva, brojevi su od 1 do 39(nije 0). Fajl sadrzi 100 redova. Svaki red je jedna loto kombinacija. Odrediti koji je broj najvise puta izvucen. Ispisati na ekranu sve kombinacije gde se pojavljuje taj broj.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    FILE * pok;
        srand(time(0));
        int a;
        int niz[39][2];
        for(int i=0;i<39;i++)
        {
            niz[i][0]=i+1;
            niz[i][1]=0;
        }
        pok=fopen("loto.txt","w");
        for(int i=0;i<100;i++)
        {
            for(int j=0;j<7;j++)
            {
                a=rand()%39+1;
                niz[a-1][1]+=1;
                fprintf(pok,"%d ",a);
            }
            fprintf(pok,"\n");
        }
        fclose(pok);
        int z,poz;
        for(int i=0;i<39;i++)
        {
            if(i==0||z<niz[i][1])
                {
                    z=niz[i][1];
                    poz=i+1;
                }
        }
        printf("\nNajvise se pojavio broj %d i to %d puta\n",poz,z);
        printf("\nTaj broj se pojavljuje u linijama:\n");
        pok=fopen("loto.txt","r");
        do
        {
            for(int i=0;i<100;i++)
        {
            for(int j=0;j<7;j++)
            {
                fscanf(pok,"%d",&a);
                if(a==poz&&feof(pok)==0)
                {
                    for(int l=0;l<7;l++)
                    {
                        fscanf(pok,"%d",&a);
                        printf("%d ",a);
                    }
                    printf("\n");
                    a=0;
                }
            }
        }
        }while(feof(pok)==0);

        fclose(pok);
    return EXIT_SUCCESS;
}
