/* Simple implemnetation of tee in c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define limit 100

int main(int argc,char *argv[ ]) //what does the order matter, I was getting a seg fault and not printing out the flag
{
  char user_in[limit];
  char flag;
  int append = 0;]
  FILE *

  while((flag = getopt(argc, argv, "ai")) != -1){
    switch (flag){
      case 'a':
        //printf("Hello World\n");
        append = 1;
        break;
      case 'i':
        /* optional */
        break;
      default:
        printf("No Flag\n");
      }
    }

  argv += optind;  // argument vector
  argc  -= optind; //argument count


  while(fgets(user_in, limit, stdin)){
    for(i=0; i<argc;i++){
      if (!append){
        out = fopen(argc[i],"w");
      }
      else{
        out = fopen(argc[i],"a");
      }
      fprintf(stdout,"%s",user_in );
      fputs(user_in, out);
      fclose(out);
    }
  }

  if(argc < 1){
   fprintf(stderr, "Specify an ouptut file\n");
   return(1);
   exit(1);
 }
 return 0;
}


/* For next time, I would spend more time looking into different strategies that could be
used to implement this version of tee.  Intiall I was trying to break it up into functions but than
I went back an looked at the reading from Chapter 3 in HFC and realized that getopt was intended to do this
kind of a program so I switched my implementation method*\

/*For starters, the proffesional code has much better documentation.  It also handles a lot more flags.  Even though, the example
and I both used getopt the sample implementation leverage more aspects of getopts to implement long options*\
