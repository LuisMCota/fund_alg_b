#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../libraries/utils.h"

int main(int argc, char** argv){


    printf("argv[1]: %s argv[1]: %s\n", argv[1], argv[2]);
    int rango1 = atoi(argv[1]);
    int rango2 = atoi(argv[2]);

    for (int i = 1; i <= rango1; i++){
        bool isdivided = (i % 2 == 0);

        if (isdivided){
            printf("even number: %d \n",i);
        }

    system("clear");
    printf("While solution!!! \n");
    int i = 1;
    while(i <= rango2){
        bool isdivided = (i % 2 == 0);

        if (!isdivided){
            printf("odd number: %d \n", i);
        }
        
        i = i + 1;
        sleep(1000);
    }

        printf("iterador: %d \n", i);
    }
    
    return 0;
}