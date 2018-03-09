/*

   C Programming Language (K&R)
   Write the function strend(s,t), which returns 1 if string
   t occurs at the end of the string s, and zero otherwise.

*/

#include <stdio.h>

int strend(const char *s, const char *t)
{

   int i;
   int j;

   for(i = 0; *(s+i); i++);
   for(j = 0; *(t+j); j++);

   if(i > j) {
      s += i - j;
      while(*s++ == *t++)
          if(!*s)
             return 1;
   }
      
   return 0;

}


int main(void)
{

    char s[1000] = "sdsdsds";
    char t[1000] = "ds";

    printf("\n%d\n",strend(s,t));

    return 0;

}



