#include <stdio.h>
#include <stdlib.h>

 int factorial(int numero)
{
    int fact,i=1;
    fact=numero;
    while(i<numero){
        fact=fact*(numero-i);
        i++;
    }
   return fact;
}

