
#include <stdio.h>
#include <stdlib.h>




int input(){
/* This function asks for the card name to be enetered
and change the value of the card value depedning on the entry*/
  char card_name[3];
 {
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    int val = 0;
    switch(card_name[0]) {
          case 'K':
          case 'Q':
          case 'J':
            val = 10;
            break;
          case 'A':
              val = 11;
              break;
          case 'X':
              break;
          default:
            val = atoi(card_name);}
        return val;
  }
  }
//
int val_range(int value) {
  /* This function check is the card value is outside range 1-10 and if it is
  ,the fucntion returns a string */
  if ((value < 1)||(value > 10)) {
      puts("I don't understand that value!");
    }
}
int valtest(int value2,int cur_count){
  /* function evalutes if card value meets 2 condition and updates the counter
  accordingly.  It also prints the current counter*/
 if ((value2 > 2) && (value2 < 7)) {
     cur_count++;
 } else if (value2 == 10) {
    cur_count --;
   }
   printf("Current count: %d\n",cur_count);
   return cur_count;}

int main(){
  int value2test = 0;
  int count = 1;
  while(value2test != -1) {
    value2test = input();
    printf("%d\n",value2test );
    val_range(value2test);
    count = valtest(value2test,count);}
  return 0;
}
