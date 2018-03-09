#include <stdio.h>

#define MAXLINE 1000

int getlinet(char line[], int maxline);
void copy(char to[], char from[]);

main()
{

   printf("EOF %d\n",EOF);
   int len;
   int max;
   char line[MAXLINE];
   char longest[MAXLINE];
   //int length[MAXLINE];

   max = 0;


   while((len = getlinet(line,MAXLINE)) > 0)
   {

       printf("main:%d\n",len);
       if(len > max) {
            max = len;
            copy(longest,line);
 
       }
 

   }
  
   printf("max: %d",max);
   if(max > 0)
        printf("%s\n",longest);
        printf("%d characters",max);
  
   return 0;


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

