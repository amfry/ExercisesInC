#include "util.h"
#include "minunit.h"
#include <stdio.h>
#include <string.h>

//unit testing for util.c icmpcode_v4

int tests_run = 0;

static char *test1() {
    int res = icmpcode_v4(1);
    char *message = "test1 failed: code 1 should return uncreachable";
    mu_assert(message, strcmp(res,"host uncreachable")==0);
    return NULL;
}

static char *test2() {
    int res = icmpcode_v4(5);
    char *message = "test2 failed: code 5 should retrun source route";
    mu_assert(message, strcmp(res,"source rout failed") == 0);
    return NULL;
}

static char *all_tests() {
  mu_run_test(test1);
  mu_run_test(test2);
  return NULL;
}

int main(int argc, char **argv) {
    char *result = all_tests();
    if (result != NULL) {
        printf("%s\n", result);
    } else {
        printf("ALL TESTS PASSED\n");
    }
    return result != 0;
}
