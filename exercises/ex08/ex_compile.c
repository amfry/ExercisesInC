/* Simple example using Glib.

From http://www.ibm.com/developerworks/linux/tutorials/l-glib/

Answers to the reading questions

-glib was orignally part of a grapihcs system and then broke out the
data structures part into glib.  Alternatives for glib include Boost and STL

-glib gives you access to more data structures than standard c.  This
allows for cleaner code.

-to compile w/ glib you need to have  `pkg-config --cflags --libs glib-2.0`
so the compile find glib on your system

*/

#include <stdio.h>
#include <stdlib.h>
#include <glib.h>

int main(int argc, char** argv) {
    GList* list = NULL;
    list = g_list_append(list, "Hello world!");
    printf("The first item is '%s'\n", (char *) g_list_first(list)->data);
    return 0;
}
