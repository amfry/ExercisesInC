/* Simple word frequency counter using Glib

*/

#include <stdio.h>
#include <stdlib.h>
#include <glib.h>


int main() {
  FILE  *ptr_file;

  ptr_file = fopen("KJV.txt","r"); //opens file in read mode
  gint descriptor = fileno(ptr_file);
}
