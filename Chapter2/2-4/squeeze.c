#include <stdio.h>
#include <stdlib.h>

void squeeze(char s1[], char s2[]);

int main(void)
{


   char s1[] = "Gustavonita";
   char s2[] = "SchirleySandra";
   squeeze(s1,s2);

   printf("squeeze:\n");
   printf("s1: %s\n",s1);
   printf("s2: %s\n",s2);

   
   return EXIT_SUCCESS;

}

void squeeze(char s1[], char s2[])
{

    int i;
    int j;
    int n;
    int a;
    
    for(i = 0; s1[i] != '\0'; i++)
    {       
           
           for(j = 0; s2[j] != '\0'; j++)
           {

                if(s1[i] == s2[j])
                      s1[i] = ' ';
           }
           
      

    }
          


}





