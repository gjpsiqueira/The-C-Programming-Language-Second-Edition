/* 
 
   Write a function expand(s1, s2) that expands shorthand notations like a-z in the string s1
   into the equivalent complete list abc...xyz in s2. Allow for letters of either case and digits, and be
   prepared to handles cases like a-b-c and a-z0-9 and -a-z. Arrange the a leading or trailing - is taken literally.

   Author: Gustavo Hackum


*/

#include <stdio.h>
#include <stdlib.h>

#define LENGTH 100
#define TRUE 1
#define FALSE 0

void expand(char s1[], char s2[]);
int check(char s1);

int main(void)
{


    char s1[LENGTH] = "-A-Z -a-c -0-9 -0-5 -a-g algorithm";
    char s2[LENGTH];

    printf("usage: -a-z -0-9 -0-5.\n");

    printf("%s\n",s1);
    expand(s1,s2);  
    printf("%s\n",s2);

    return EXIT_SUCCESS;

}

void expand(char s1[], char s2[])
{
    int i;
    int j = 0;
    int a = 0;
   
    for(i = 0; s1[i] != '\0'; i++)
    {
          
          if(s1[i] == '-')
          {
              
              if(s1[i + 2] == ' ')
              {

                    s2[a] = ' ';
                    
              } 
              else
              {
	           if(check(s1[i + 1]) == TRUE)
                   {

                     for(j = s1[i + 1]; j <= s1[i  + 3]; j++,a++)    
                     {     
                        s2[a] = j;
                     }
                    
                     s2[a++] = '-';
                     s2[a++] = ' ';
                   }            
                                      
              }
            
          }
          else
          {

             s2[a++] = s1[i]; 
            
          }
 
    

    }
    
}

int check(char s1)
{
      if(s1 >= '0' && s1 <= '9') //&&
        //(s2 >= '0' && s2 <= '9'))
          return TRUE;
      else if(s1 >= 'a' && s1 <= 'z') 
              //(s2 >= 'a' && s2 <= 'z'))
          return TRUE;
      else if(s1 >= 'A' && s1 <= 'Z')
          return TRUE;
      else 
          return FALSE;

      return FALSE;
   
}
