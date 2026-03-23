/*Formirati klasu valjak sa podacima o obimu i visini. Napraviti niz od 10 objekata popunjen random podacima, odrediti ukupnu zapreminu valjka*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class valjak {
private:
    float r, h;
public:
    void set(float x, float y){
        this->r=x;
        this->h=y;
    }
    float get(){
        return this->r*6.28*this->h;
    }
};
int main(int argc, const char * argv[]) {
    srand(time(0));
    int i;
    float a, b, s=0;
    valjak niz[10];
    for (i=0; i<10; i++) {
        a=rand()%100;
        b=rand()%200;
        niz[i].set(a, b);
        cout<<i+1<<". zapremina: "<<niz[i].get();
        s+=niz[i].get();
    }
    cout<<"zbir zapremina: "<<s;
    return EXIT_SUCCESS;
}
