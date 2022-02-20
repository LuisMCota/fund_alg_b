#include <stdbool.h>
#include <stdio.h>



int main(){
    int numberToTest = 9;
    int result = numberToTest % 2;
    bool hasModule = (result > 0);

    if(hasModule){
        printf("Odd\n");
    } else{
        printf("even\n");
    }
return 0;
}