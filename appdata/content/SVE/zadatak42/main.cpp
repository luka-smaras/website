/*Nema teksta.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class kamion {
public:
    float cisterna, tockovi;
    kamion(){}
    kamion(float, float);
    kamion operator%(kamion);
};
kamion::kamion(float a, float b){
    this->cisterna=a;
    this->tockovi=b;
}
kamion kamion::operator%(kamion p){
    kamion temp;
    temp.cisterna=cisterna+p.cisterna;
    float z1, z2, ukupno;
    z1 = cisterna*tockovi;
    z2 = p.cisterna*p.tockovi;
    ukupno=z1+z2;
    temp.tockovi=ukupno/temp.cisterna;
    return temp;
}
int main(int argc, const char * argv[]) {
    kamion c;
    kamion a(8, 12);
    kamion b(6, 8);
    c=a%b;
    cout<<"prvi kamion ima "<<a.cisterna<<" cisterni i "<<a.tockovi<<" tockova\n";
    cout<<"drugi kamion ima "<<b.cisterna<<" cisterni i "<<b.tockovi<<" tockova\n";
    cout<<"zajedno kamioni imaju "<<c.cisterna<<" cisterni i "<<c.tockovi<<" tockova po cisterni\n";
    return EXIT_SUCCESS;
}
