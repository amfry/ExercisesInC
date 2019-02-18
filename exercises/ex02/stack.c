/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int *foo() {
    int i;
    int array[SIZE];

    /*printf("%p\n", array);*/

    for (i=0; i<SIZE; i++) {
        array[i] = 42;
    }
    return array;
}

void bar() {
    int i;
    int array[SIZE];

    /*printf("%p\n", array);*/

    for (i=0; i<SIZE; i++) {
        array[i] = i;
    }
}

int main()
{
    int i;
    int *array = foo();
    bar();

    for (i=0; i<SIZE; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

/*1. foo sets every value in the aerray equal to 42 so {42.42.42.42.42}
bar increments by 1 {0,1,2,3,4
In main, foo prints 42, 5 times}
2. When I compiled stack, I got the error "stack.c: In function ‘foo’:
stack.c:22:12: warning: function returns address of local variable [-Wreturn-local-addr]
     return array;"
The warnign is tell you that the address of the local varible will not be there when the function
stops running

3.  You still get the warnign but the address does print



 */
