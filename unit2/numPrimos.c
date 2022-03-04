#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){
int num1,i,a;
a = 0;

printf("Ingresar un numero; \n");
scanf("%d", &num1);

for(i = 1; i <= num1; i++){
    bool isdivide = (num1%i == 0);
    i++;
    if (isdivide){
        printf("Numero Primo\n");
    }else{
        printf("No es numero primo\n");
    }
}
return 0;
}

