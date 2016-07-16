#include <stdio.h>
#include <stdlib.h>

int main(void){
    double s1;
    double s2;
    double s3;
    int competitor_num;
    int winner = 0;
    double a1;
    double a2 = 0.0;
    while(4 == scanf("%d%lg%lg%lg",&competitor_num, &s1, &s2, &s3)){
        a1 = (s1+s2+s3)/3;
        if(a1>a2){
            a2 = a1;
            winner = competitor_num;
        }
        printf("Average score of %d is: %f.\n", competitor_num, a1);
    }
    printf("Winner is: %d and score is: %f.\n", winner,a2);
    return EXIT_SUCCESS;
}
