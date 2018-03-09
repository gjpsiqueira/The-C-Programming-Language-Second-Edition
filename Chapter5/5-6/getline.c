/*

  C Programming Language (K&R)
  Rewrite appropriate programs from earlier chapters and exercises
  with pointers instead of array indexing. Good possibilities include
  getline (Chapter 1 and 4), atoi, itoa, and their variants (Chapter 2,3 and 4) 
  reverse (Chapter 3), and strindex and getop (Chapter 4).

*/

/* strindex: return index of t in s, -1 if none */
/* pointer version */

#include <stdio.h>
int strindex(const char *s, const char *t)
{

   int i, j, k;
 
   for(i = 0; *s++ != '\0'; s++,i++) {
       for(j = i, k = 0; *t++ != '\0' && *s++ == *t++; j++, k++)
         ; 

       t += k;
       if(k > 0 && *t++ == '\0') 
           return i;

   }

   return -1;

}

int main(void)
{

    char s[100] = "gustavosoftware";
    char t[100] = "software";

    printf("%d\n",strindex(s,t));

    return 0;


}






