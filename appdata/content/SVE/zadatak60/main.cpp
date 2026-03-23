/*Realizovati zadatak sa studentom i master studentom. Biramo 1 ili 2 i pisemo prosek.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class student {
public:
    virtual void ucitavanje()=0;
    virtual float prosek()=0;
    virtual void ispis()=0;
    virtual ~student(){}
};

class osnovneStudije:public student {
private:
    float a, b;
public:
    void ucitavanje(){
        cout<<"uneti prvu ocenu: ";
        cin>>a;
        cout<<"uneti drugu ocenu: ";
        cin>>b;
    }
    float prosek(){
        return (a+b)/2;
    }
    void ispis(){
        cout<<"prosek ocena je: "<<prosek();
    }
};
class masterStudije:public student {
private:
    float a, b, c;
public:
    void ucitavanje(){
        cout<<"uneti prvu ocenu: ";
        cin>>a;
        cout<<"uneti drugu ocenu: ";
        cin>>b;
        cout<<"uneti trecu ocenu: ";
        cin>>c;
    }
    float prosek(){
        return (a+b+c)/3;
    }
    void ispis(){
        cout<<"prosek ocena je: "<<prosek();
    }
};
int main(int argc, const char * argv[]) {
    student* x=NULL;
    int izbor;
    cout<<"izabrati tip studija:\n";
    cout<<"1 - osnovne studije\n";
    cout<<"2 - master studije\n";
    cin>>izbor;
    if (izbor==1) {
        x=new osnovneStudije();
    }
    if (izbor==2) {
        x=new masterStudije();
    }
    x->ucitavanje();
    x->ispis();
    delete x;
    return EXIT_SUCCESS;
}
