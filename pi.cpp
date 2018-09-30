/*BILL BATTUSHIG            MONTE CARLO PI          29/09/2018
ICS4U
THIS PROGRAM FINDS THE PI
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <apvector.h>
using namespace std;

int main()
{
    srand(time(NULL));
    double x,y,pie;
    int c=0;
    for (int i = 0; i<=10000000; i++)
    {
        x = rand()/RAND_MAX;
        y = rand()/RAND_MAX;
        if(x*x+y*y < 1)
        {
            c++;
        }
    }
    pie =(double)4.00*c/10000000;
    cout<<pie<<endl;
    return 0;
}
