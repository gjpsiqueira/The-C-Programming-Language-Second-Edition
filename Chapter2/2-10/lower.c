#include <stdio.h>
#include <stdlib.h>

/*

   Rewrite the function lower, which converts upper case letters
   to lower case, with a conditional expression instead if-else.

   Author: Gustavo Hackum

*/

int main(void)
{


    int c;

    while((c = getchar()) != EOF)
    {
          printf("%c",lower(c));
      
    }
 
	   
    return EXIT_SUCCESS;
}


int lower(int c)
{

    return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;

}
          
      
  

