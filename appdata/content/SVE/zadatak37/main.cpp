/*Definisati klasu radnik koja ima privatne promenljive cena po satu i radni sati, funkciju za dodeljivanje i za izracunavanje plate. Formirati 2 objekta (radnika), uneti podatke za njih i izracunati ko ima vecu platu. Koristiti get, set, this, cin, cout*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class radnik {
private:
    int cps, sati;
public:
    void set(int x, int y){
        this->cps=x;
        this->sati=y;
    }
    int get(){
        return this->cps*this->sati;
    }
};

int main(int argc, const char * argv[]) {
    radnik niz[100];
    int a, b, i, maxi=0, br=0;
    srand(time(0));
    for (i=0; i<100; i++) {
        a=rand()%700;
        b=rand()%200;
        niz[i].set(a,b);
        if(niz[i].get()>maxi){
            maxi=niz[i].get();
            br=i+1;
        }
        cout<<i+1<<". radnik ima platu od: "<<niz[i].get()<<endl;
    }
    cout<<"najvecu platu ima radnik "<<br<<" sa platom od "<<maxi<<endl;
    return EXIT_SUCCESS;
}
