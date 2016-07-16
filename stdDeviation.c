#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ARRAY_SIZE 10

int main(void){
    int competitor;
    double j1;
    double j2;
    double j3;
    double j1_array[ARRAY_SIZE];
    double j2_array[ARRAY_SIZE];
    double j3_array[ARRAY_SIZE];
    double mean1 = 0.0;
    double mean2 = 0.0;
    double mean3 = 0.0;
    double variance1 = 0.0;
    double variance2 = 0.0;
    double variance3 = 0.0;
    int i = 0;
    int j = 0;
    while(4==scanf("%d%lg%lg%lg", &competitor, &j1, &j2, &j3)){
        j1_array[i] = j1;
        j2_array[i] = j2;
        j3_array[i] = j3;
        i++;
    }
    /*printf("%d\n",i);*/
    for(j=0; j<i;j++){
        mean1 += j1_array[j];
    }
    mean1 = mean1 / i;
    for(j=0; j<i;j++){
        variance1 += pow((j1_array[j] - mean1),2);
    }
    variance1 = variance1 / (i-1);

    
    for(j=0; j<i;j++){
        mean2 += j2_array[j];
    }
    mean2 /= i;
    for(j=0; j<i;j++){
        variance2 += pow((j2_array[j] - mean2),2);
    }
    variance2 /= (i-1);
    
    for(j=0; j<i;j++){
        mean3 += j3_array[j];
    }
    mean3 /= i;
    for(j=0; j<i;j++){
        variance3 += pow((j3_array[j] - mean3),2);
    }
    variance3 /= (i-1);
  
    printf("judge1: %3.1f   %3.1f\n", mean1, sqrt(variance1));
    printf("judge2: %3.1f   %3.1f\n", mean2, sqrt(variance2));
    printf("judge3: %3.1f   %3.1f\n", mean3, sqrt(variance3));

    
    return EXIT_SUCCESS;
}
