/*Korisnik ucitava dva realna broja i uz pomoc funkcije deljenje deli ta dva broja i ispisuje rezultat na ekranu.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

float deljenje(float x, float y){
    float temp;
    if(y==0) throw 10;
    if(y==0) throw "greska";
    temp=x/y;
    return temp;
}
int main(int argc, const char * argv[]) {
    float a, b, rez;
    cout<<"uneti prvi broj: ";
    cin>>a;
    cout<<"uneti drugi broj: ";
    cin>>b;
    try {
        rez=deljenje(a, b);
        cout<<"rezultat je: "<<rez;
    }
    catch (int pp) {
        if (pp==10) cout<<"zabranjeno deljenje sa nulom\n";
    }
    catch (const char * poruka) {
        cout<<poruka;
    }
    return EXIT_SUCCESS;
}
