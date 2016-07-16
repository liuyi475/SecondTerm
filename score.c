#include <stdio.h>
#include <stdlib.h>

int main(void){
    double s1;
    double s2;
    double s3;
    int return_code;
    printf("3 double scores: ");
    fflush(stdout);
    return_code = scanf("%lg%lg%lg", &s1, &s2, &s3);
    if(return_code != 3){
        printf("scanf returned code %d\n", return_code);
        return EXIT_FAILURE;
    }
    printf("Your 3 scores are: %f, %f and %f\n", s1, s2, s3);
    if(s1<s2 && s1<s3){
        printf("Average number is: %f\n", (s2+s3)/2);
    }else if(s2<s3 && s2<s1){
        printf("Average number is: %f\n", (s1+s3)/2);
    }else{
        printf("Average number is: %f\n", (s1+s2)/2);
    }
    return EXIT_SUCCESS;
}
