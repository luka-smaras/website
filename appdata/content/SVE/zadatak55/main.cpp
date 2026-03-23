/*Napraviti apstraktnu klasu radnik koja ima virtuelne funkcije ucitavanje i plata. Zatim napraviti klasu programer koja ima broj sati rada, cenu po satu i funkciju plata. U main funkciji napraviti objekat programer, uneti podatke i ispisati platu.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class figura {
public:
    virtual void ucitavanje()=0;
    virtual float povrsina()=0;
};
class pravougaonik:public figura {
private:
    float a, b;
public:
    void ucitavanje(){
        cout<<"uneti stranicu a: ";
        cin>>a;
        cout<<"uneti stranicu b: ";
        cin>>b;
    }
    float povrsina(){
        return a*b;
    }
};
int main(int argc, const char * argv[]) {
    pravougaonik x;
    x.ucitavanje();
    cout<<"povrsina pravougaonika je: "<<x.povrsina();
    return EXIT_SUCCESS;
}
