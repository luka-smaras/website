/*Formirati klasu pravougaonik sa 2 privatne promenljive, duzina i sirina i funkciju za dodeljivanje i izracunavanje povrsine. Formirati jedan objekat i ispisati njegovu povrsinu na ekranu*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class pravougaonik {
private:
    int duzina, sirina;
public:
    void set(int x, int y){
        this->duzina=x;
        this->sirina=y;
    }
    int get(){
        return this->duzina*this->sirina;
    }
};
int main(int argc, const char * argv[]) {
    pravougaonik z;
    int a, b;
    cout<<"uneti sirinu:";
    cin>>a;
    cout<<"uneti duzinu:";
    cin>>b;
    z.set(a, b);
    cout<<"povrsina je: "<<z.get();
    return EXIT_SUCCESS;
}
