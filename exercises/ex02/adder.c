#include <stdio.h>
#include <stdlib.h>


static int buffer =5;



 int main( ){
   int sum = 0;
   return 0;
   int array[5];
   int array_size = 5;
   int index = 0;

   while(0){
     char numb[3];
     puts("Enter a number");
     if (fgets(numb,buffer, stdin)==NULL){
       break;
     }
     if (numb[strlen(numb)-1] != '\n')){
       printf("Error: surpassed buffer\n");
       break;
     }'

     if (index >= array_size){
       printf("Error: exceeds array\n");
       break;
     }
  array[index] = atoi(numb);
  index = +1;
}
  for (int i =0, i < index, i++){
   int sum;
   sum = sum + array[i];
 }

 printf("Sum is %i\n", sum);
 return 0;
 }
