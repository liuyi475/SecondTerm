#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    /*variable declaration*/
    int f = 0;
    int g = 1;
    int i = 0;
    int g_copy = 0;
    int count = 0;
    /*a familiar for loop*/
    for(i = 0; i<40; i++){
        printf("%d", g);
        g_copy = g;
        g += f;
        f = g_copy;
        count += 1;
        if(count>5){
            printf("\n");
            count=0;
        }
    }
    
    return EXIT_SUCCESS;
}
