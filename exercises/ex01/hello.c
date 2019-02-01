#include <stdio.h>


/* add: return the sum of x and y */
int add(int x, int y) {
    int z = x + y;
    return z;
}

int main() {
    int x = 5;
    int y = x + 1;
    printf("%d",y);
    int k;
    k = add(3,4);
    return k;
    return 0;

}

/* The experiment shows whebe variables get allocated and when they done.
The run time reduces by elminating instructions need to implement the code.
For code this simple you can really notice a reduction is time but you can see a reduction
in the size of the assembly coe */
