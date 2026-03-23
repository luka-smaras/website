/*Napraviti apstraktnu klasu figiura koja ima virtuelnu funkciju povrsina i virtuelnu funkciju ucitavanje. Napraviti klasu pravougaonik koja nasledjuje klasu figura i implementirati te funkcije. U main funkciji napraviti objekat pravougaonik, uneti podatke i ispisati povrsinu.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class figure
{
public:
    virtual void ucitavanje()=0;
    virtual float povrsina()=0;
};
class pravougaonik:public figure
{
private:
    float a,b;
public:
    void ucitavanje(){
        printf("Unesi stranicu a:\n");
        scanf("%f",&a);
        printf("Unesi stranicu b:\n");
        scanf("%f",&b);
    }
    float povrsina(){
        return a*b;
    }
};
int main(int argc, const char * argv[])
{
    pravougaonik x;
    x.ucitavanje();
    printf("\nPovrsina pravougaonika je %10.2f",x.povrsina());
    return EXIT_SUCCESS;
}
