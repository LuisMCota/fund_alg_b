#include <stdio.h>
#include "../libraries/utils.h"

int main(int argc, char** argv){
    for (int iterator = 1; iterator <= 10; iterator = iterator + 1){//for(en donde empieza mi loop; hasta donde llega; una operacion)
        printf("ITERATOR: %d\n", iterator);//la %d para que imprima el resultado del for con Iterator
        sleep(1000);// se encuentra en utils.h y sirve para que el programa corra mas lento = un segundo
    }
    return 0;
}