#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    /*variable declaration*/
    int i = 0;
    double j = 1.0;

    /*a familiar for loop*/
    for(i = 0; i<10; i++){
        printf("%d %5.2f %6.3f\n", i, j, sqrt(j));
        j*=2;
    }
    return EXIT_SUCCESS;
}
