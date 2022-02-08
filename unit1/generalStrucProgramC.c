#include <stdio.h>
#include <stdlib.h>

//Global Variables;
//Create a variable: dataType nameVariable = anyData;
//dataTypes in C/C++/C#/PHP
int unEntero = 3;  //definiendo la variable y asignandola//
float unDecimal = 3.1416;
char* name = "Luis Fernando";
char unCaracter = 'M';
int temperatura; //Definiendo la variable
//////////////////////////////////
//*Global Variables*//
char* date = "02-02-22T10:25:00z";
//////////////////////////////////

///La ejecucion del Programa//////
int main(){
    temperatura = 24;
    int hours = 6;
    printf("hours: %i\n", hours);
    hours = hours + 2;
    printf("hours: %i\n", hours);
    printf("Hello Data B %s\n", name);
    return 0;
}
///////////////////////////////////