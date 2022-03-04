#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    
int num;
printf("Ingresar un numero: \n");
scanf("%d", &num);


for(int i = 1; i <= num; i++){
    bool isdivide = (num%i == 0);
    i++;

    if (isdivide){
        printf("Numero Primo \n");
    }
    else{
        printf("No es numero primo\n");
    }
}
return 0;
}


