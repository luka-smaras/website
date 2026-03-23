/*Korisnik unosi iznos kredita. U petlji while ucitavamo koliki iznos rate je uplacen. Sa funkcijom oduzimanje racunamo koliko je ostalo do isplate kredita. Ako je kredit isplacen generisemo izuzetak. Na ekranu ispisujemo na koliko rata je placen kredit.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

float oduzimanje(float a, float b){
    float c;
    c=a-b;
    if (c<0) throw 10;
    return c;
}
int main(int argc, const char * argv[]) {
    float x, y, z, d, kredit;
    int prekid=0, rate=0;
    cout<<"koliki je kredit: ";
    cin>>kredit;
    do {
        cout<<"uneti iznos rate: ";
        cin>>x;
        try {
            z=oduzimanje(kredit, x);
            rate++;
            cout<<"treba jos!\nza isplatu: "<<z;
            kredit=z;
        } catch (int p) {
            if(p==10) cout<<"kredit isplacen\n broj rata: "<<rate;
        }
    } while (kredit>0);
    return EXIT_SUCCESS;
}

