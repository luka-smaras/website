/**/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class telo
{
private:
    float masa,povr;
public:
    telo (float x,float y)
    {
        masa=x;
        povr=y;
    }
        float pritisak()
        {
            return masa*9.81/povr;
        }
};
using namespace std;
int main(int argc, const char * argv[])
{
    printf("\nUnesite masu pa povrsinu \n");
    float b1,b2;
    scanf("%f%f",&b1,&b2);
    telo a(b1,b2);
    printf("\nPritisak je %.2f \n\n",a.pritisak());
    return EXIT_SUCCESS;
}


