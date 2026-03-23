/*Formirati klasu voz koja ima promenljive broj vagona i broj sedista po vagonu. Napraviti operaciju sabiranje vozova tako sto novi voz ima zbir vagona i sedista (overloadovana operacija *, nije mnozenje). Uneti podatke za 2 voza i sabrati ih.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class voz {
public:
    int brvag, spv;
    voz(){}
    voz(int a, int b){
        this->brvag=a;
        this->spv=b;
    }
    voz operator* (voz p){
        voz temp;
        temp.brvag=brvag+p.brvag;
        temp.spv=spv+p.spv;
        return temp;
    }
};
int main(int argc, const char * argv[]) {
    voz c;
    voz a(3, 40);
    voz b(2, 36);
    c=a*b;
    cout<<"prvi voz ima "<<a.brvag<<" vagona i "<<a.spv<<" sedista\n";
    cout<<"drugi voz ima "<<b.brvag<<" vagona i "<<b.spv<<" sedista\n";
    cout<<"zajedno vozovi imaju "<<c.brvag<<" vagona i "<<c.spv<<" sedista\n";
    return EXIT_SUCCESS;
}
