#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000


int getlinet(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{

   printf("EOF %d\n",EOF);
   int len;
   int max;
   char line[MAXLINE];
   char longest[MAXLINE];
   //int length[MAXLINE];

   max = 80;


   while((len = getlinet(line,MAXLINE)) > 0)
   {

       printf("main:%d\n",len);
       if(len > max) {
            max = len;
            copy(longest,line);
            break; 
       }
 

   }
  
   //printf("max: %d",max);
   if(max > 80) {
        printf("%s\n",longest);
        printf("%d characters \n",max);
   }else { 
        printf("error: charactes just longest or equal than 80.");

   }
   
   return EXIT_SUCCESS;


}

int getlinet(char s[],int lim)
{

   printf("getlinet\n");
   int c,i;

   for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
          s[i] = c;
    
    
   if(c == '\n') {
        s[i] = c;
        ++i;
   }

   s[i] = '\0';
   printf("%d\n",i);
   return i;


}

void copy(char to[], char from[])
{


   int i;
   i = 0;

   while((to[i] = from[i]) != '\0')
       ++i;           


}

