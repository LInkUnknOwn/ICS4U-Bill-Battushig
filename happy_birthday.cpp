/*BILL BATTUSHIG                    HAPPY BIRTHDAY              28/09/2018
ICS4U
THIS CODE CALCULATES THE CHANCE OF 20 PEOPLE HAVING THE SAME BIRTHDAY */

#include <iostream>
#include <apvector.h>
#include <time.h>
#include <fstream>

int main()
{
    //SYSTEM COLOR
    system("Color 0A");

    //DECLARE VARIABLES
    int counter = 0;
    double answer = 0;
    apvector<int>people(20,0);
    bool break_after = false;

    //MONTE CARLO 9000 EXPERIMENTS
    for(int x = 0; x<9000; x++)
    {
        break_after =false;

        //RANDOMIZE BIRTHDAYS
        for(int i = 0; i < 20; i++)
        {
            people[i]=rand()%365+1;
        }

        //COMPARE THE BIRTHDAYS OF 20 PEOPLE
        //IF THEY HAVE THE SAME BIRTHDAY THEN EXIT THE EXPERIMENT
        for(int j = 0; j < 20; j++)
        {
            for(int m = 0; m < 20; m++)
            {
                if(j<m)
                {
                    if(people[j]==people[m])
                    {
                        counter++;
                        break_after = true;
                    }
                }
                if(break_after==true)
                {
                    break;
                }
            }
            if(break_after==true)
            {
                break;
            }
        }
    }

    //CALCULATE THE PROBABILITY
    answer = 1.00*counter/9000*100;

    //DISPLAY THE RESULT
    std::cout<<"The Chance of Having the Same Birthday is: "<<answer<<" %"<<std::endl;
    return 0;
}

