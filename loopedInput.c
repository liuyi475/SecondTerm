#include <stdio.h>
#include <stdlib.h>

int main(void){
    double entry = 0.0;
    double total = 0.0;
    int number_of_enties = 0;

    while(1 == scanf("%lg", &entry)){
        total += entry;
        number_of_enties ++;
    }

    /*print the average of all the entries*/
    printf("%f\n",total/number_of_enties);
    return EXIT_SUCCESS;
}
