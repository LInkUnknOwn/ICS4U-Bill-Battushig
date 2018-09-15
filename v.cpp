#include <vector>
#include <apvector.h>
#include <iostream>

#include <fstream>

using namespace std;

int main() {

    apvector<int>data(6);
    apvector<int>data2(6);

    data[0] = 1;
    data[1] = 1;
    data[2] = 2;
    data[3] = 3;
    data[4] = 4;
    data[5] = 5;

    data2[0] = 0;
    data2[1] = 1;
    data2[2] = 1;
    data2[3] = 2;
    data2[4] = 3;
    data2[5] = 6;

    int a = 0;
    int g = 0;
    int j = 0;

    apvector<int>output(12);

    for(int i = 0; i < 12; i++){

        if((data[a] < data2[g])&&(a<6)){
            printf("One\n");
            output[j] = data[a];
            a++;
        }
        else {
            printf("Two\n");
            output[j] = data2[g];
            g++;
        }

        if(a >= 5){
            printf("Three\n");
            a--;
            output[j] = data2[g];
            g++;
        }
        if(g >= 5){
            printf("Four\n");
            g--;
            output[j] = data2[a];
            a++;
        }
        cout << output[j] << endl;
        j++;
    }
	return 0;
}
