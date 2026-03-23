/*Definisati klasu koja u sebi ima funkciju za ucitavanje brojeva i izvedenu klasu te klase koja vrsi sabiranje unetih brojeva.*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class brojevi {
protected:
    int a, b;
public:
    void ucitavanje(){
        cout<<"uneti prvi broj: ";
        cin>>a;
        cout<<"uneti drugi broj: ";
        cin>>b;
    }
};
class sabiranje:public brojevi{
public:
    void saberi(){
        int suma=a+b;
        cout<<"suma je: "<<suma;
    }
};
int main(int argc, const char * argv[]) {
    sabiranje x;
    x.ucitavanje();
    x.saberi();
    return EXIT_SUCCESS;
}
