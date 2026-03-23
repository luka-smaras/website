/*Korisnik unosi obim i duzinu panja(valjak), panjevi se unose sve dok njihova ukupna zapremina ne predje x kubnih metara.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int sabiranje(int &zbir,int x,int a,int b){
    zbir+=a;
    if(zbir>x) throw 0;
    return zbir;
}
int main(int argc, const char * argv[])
{
    int duz,obim,x,zbir=0;
    cout<<"Unesite x\n";
    cin>>x;
    while(1){
        try{
            cout<<"Unesite obim\n";
            cin>>obim;
            cout<<"Unesite duzinu\n";
            cin>>duz;
            zbir=sabiranje(zbir,x,obim,duz);
            cout<<zbir<<"\n";
        }
        catch(int pp){
            if(pp==0){cout<<"\n\n"<<"Finalna vrednost "<<zbir<<"\n\n";
            }
    }

    return EXIT_SUCCESS;
}

