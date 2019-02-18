/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

int var1;

int local_address(){
  int local = 5;
  void *add = malloc(local);
  printf("local points to %p\n",add);
}



int main ()
{
    int var2 = 5;
    char *c;
    void *p = malloc(128);
    c = (char *) malloc(15);
    char *s = "Hello, World";
    int array1[10];
    int array2[10];


    printf ("Address of main is %p\n", main);
    printf ("Address of var1 is %p\n", &var1);
    printf ("Address of var2 is %p\n", &var2);
    local_address();
    printf ("p points to %p\n", p);
    printf ("s points to %p\n", s);
    printf("str points to %p\n",c);
    printf("Address of array 1 %p\n",&array1);
    printf("Address of array 2 %p\n",&array2);

    return 0;
}


/*Diffrence between the arrays is 48
