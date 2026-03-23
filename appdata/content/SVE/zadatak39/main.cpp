/*Formirati klasu saberi koja ima overloadovanu funkciju sabiranje*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class saberi {

public:
    int sabiranje(int x, int y){
        return x+y;
    }
    int sabiranje(int x, int y, int z){
        return x*(x+z);
    }
    double sabiranje(double x, double y){
        return x+y;
    }
    int sabiranje(int x, int y, int z, int q){
        int rezultat=0;
        if(q==1) rezultat=x+y+z;
        if(q==2) rezultat=x*y*z;
        if((q!=2)&&(q!=1)) rezultat=x;
        return rezultat;
    }
};

int main(int argc, const char * argv[]) {
    saberi a;
    cout<<"uneti 4 cela broja i 2 realna:\n";
    int e,b,c,d;
    double r,t;
    cin>>e;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>r;
    cin>>t;
    cout<<"rezultat je: "<<a.sabiranje(e, b);
    cout<<"rezultat je: "<<a.sabiranje(e, b, c);
    cout<<"rezultat je: "<<a.sabiranje(r, t);
    cout<<"rezultat je: "<<a.sabiranje(e, b, c, d);
    return EXIT_SUCCESS;
}
