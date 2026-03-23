/**/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class automobil
{
    public:
        static int cenagor;
        int put,potrosnja;
        float izracunaj()
        {
            return put/potrosnja/cenagor;
        }
};
using namespace std;
int automobil::cenagor=30;
int main(int argc, const char * argv[])
{
    automobil pezo,punto,skoda;

        printf("\nUnesite put i potrosnju pezoa:");
        scanf("%d%d",&pezo.put,&pezo.potrosnja);

        printf("\nUnesite put i potrosnju puntoa:");
        scanf("%d%d",&punto.put,&punto.potrosnja);

        printf("\nUnesite put i potrosnju skode:");
        scanf("%d%d",&skoda.put,&skoda.potrosnja);

    if(pezo.izracunaj()<punto.izracunaj()&&(punto.izracunaj()<=skoda.izracunaj()||punto.izracunaj()>=skoda.izracunaj()))
        printf("\nPezo je potrosio najmanje\n");
        else if(punto.izracunaj()<pezo.izracunaj()&&(pezo.izracunaj()<=skoda.izracunaj()||pezo.izracunaj()>=skoda.izracunaj()))
        printf("\nPunto je potrosio najmanje\n");
            else if(skoda.izracunaj()<punto.izracunaj()&&(punto.izracunaj()<=pezo.izracunaj()||punto.izracunaj()>=pezo.izracunaj()))
        printf("\nSkoda je potrosio najmanje\n");
    return EXIT_SUCCESS;
}
