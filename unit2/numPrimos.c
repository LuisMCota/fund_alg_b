#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    
 int n, i, num = 0;
  printf("Ingresa X numero:");
  scanf("%d", &n);

  //logic
  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         num++;
      }
  }

  if (num == 2){
      printf("Is prime\n");
  } else {
      printf("It is not prime\n'");
  }
return 0;
}