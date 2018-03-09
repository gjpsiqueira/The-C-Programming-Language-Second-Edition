#include <stdio.h>
#include <stdlib.h>

#define LENGTH 1000

char s[LENGTH];

int escape();
void characters();

int main(void)
{

    extern char s[];
    int i;
    for(i = 0; i < LENGTH; i++) s[i] = 0;

 
    int c;
    int n = 0;
    while((c = escape()) > 0)
    {

         switch(c) {

            case '\n':
                printf("\\n");
                printf("\n");
                break;
            case '\t':
                printf("\\\t");
                printf("\n");
                break;
            default:
                printf("%c",c);
                break;
 

       }

       

    }

    return EXIT_SUCCESS;



}

int escape()
{


   int c;
   int i;
   extern char s[];
   for(i = 0; (c = getchar()) != EOF && c != '\n'; i++)
	 
  

   
   return c;
  

}

void characters()
{

    extern char s[];
    int i;
    for(i = 0; s[i] != '\0'; i++)
        printf("characters: %c\n",s[i]);     


}





