/*Korisnik ucitava cele brojeve. Kada zbir svih unetih brojeva predje vrednost x, funkcija sabiranje generise izuzetak i na ekranu se ispisuje koji je trenutni zbir.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int sabiranje(int limit, int broj, int zbir){
    if (zbir>=limit) throw 1;
    zbir+=broj;
    return zbir;
}
int main(int argc, const char * argv[]) {
    int x, n, s=0;
    cout<<"uneti limit za sabiranje: ";
    cin>>x;
    while(true){
        try{
            cout<<"uneti sabirak: ";
            cin>>n;
            s=sabiranje(x, n, s);
            cout<<s;
        }
        catch(int ec){
            if (ec==1) cout<<"LIMIT"; break;
        }
    }
    return EXIT_SUCCESS;
}
