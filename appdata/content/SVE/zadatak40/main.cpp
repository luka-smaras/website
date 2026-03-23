/*Definisati klasu vektor koja ima promenljive x, y, z. Formirati funkciju koja vrsi sabiranje vektora tako sto se izvrsi overload operatora plus (opterecenje). Formirati 2 objekta, sabrati ih sa tim novim operatorom i ispisati koordinate rezultujuceg vektora*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class vektor {

public:
    int x, y, z;
    vektor(){}
    vektor(int a, int b, int c){
        this->x=a;
        this->y=b;
        this->z=c;
    }
    vektor operator+ (vektor p){
        vektor temp;
        temp.x=x+p.x;
        temp.y=y+p.y;
        temp.z=z+p.z;
        return temp;
    }
};
int main(int argc, const char * argv[]) {
    vektor c;
    vektor a(3, 4, 1);
    vektor b(5, 6, 2);
    c=a+b;
    cout<<"vektor a koordinate: "<<a.x<<", "<<a.y<<", "<<a.z;
    cout<<"vektor b koordinate: "<<b.x<<", "<<b.y<<", "<<b.z;
    cout<<"zbir koordinate: "<<c.x<<", "<<c.y<<", "<<c.z;
    return EXIT_SUCCESS;
}
