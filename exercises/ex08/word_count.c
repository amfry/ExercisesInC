/* Simple word frequency counter using Glib


*/

#include <stdio.h>
#include <stdlib.h>
#include <glib.h>


//function to print out the hash table
void print_h(gpointer key, gpointer value, gpointer user_data){
    char *pkey = key;
    printf("%s: %i\n", pkey, GPOINTER_TO_INT(value));
}

int main() {
  FILE  *ptr_file;
  ptr_file = fopen("KJV.txt","r"); //opens file in read mode
  gint descript = fileno(ptr_file);
  GScanner *GS =g_scanner_new(NULL); //gscanner tokenizes text for lexical analysis
  GHashTable *GH = g_hashtable_new(g_str_hash,g_str_equal);

  g_scanner_input_file(GS,descript);
  while(g_scanner_eof(GS) == FALSE){
    g_scanner_get_next_token(GS); //parses the next token, removes from input
    if(GS->value.v_string == NULL)
      continue;
    if(g_hash_table_lookup(GH,GS -> value.v_string)==NULL){
      g_hash_table_insert(GH,g_strdup(GS->value.v_string),GINT_TO_POINTER(1));
      }
    else{
      g_hash_table_insert(GH, g_strdup(GS->value.v_string), g_hash_table_lookup(GH,GS->value.v_string)+1);
    }
  }
     g_hash_table_foreach(GH, print_h, NULL);

    return 0;
  }
