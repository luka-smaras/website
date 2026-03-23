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
    radnik x, y;
    int a, b;
    cout<<"Uneti radne sate prvog radnika: ";
    cin>>a;
    cout<<"Uneti cenu prvog radnika: ";
    cin>>b;
    x.set(a,b);
    cout<<"Uneti radne sate drugog radnika: ";
    cin>>a;
    cout<<"Uneti cenu drugog radnika: ";
    cin>>b;
    y.set(a,b);
    if (x.get()>y.get()) cout<<"prvi radnik zaradjuje vise\n";
    if (x.get()<y.get()) cout<<"drugi radnik zaradjuje vise\n";
    return EXIT_SUCCESS;
}
