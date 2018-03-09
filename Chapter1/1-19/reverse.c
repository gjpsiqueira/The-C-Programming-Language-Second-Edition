#include <stdio.h>
#include <stdlib.h>

#define LENGTH 100

void getlinet(void);
void reverse(char s[], int n);

int main(void)
{
   getlinet();

   return EXIT_SUCCESS;

}

void getlinet(void)
{

    int j;
    int c;
    int i;
    char s[LENGTH];    

    for(i = 0; i < LENGTH; i++) s[i] = 0;

    

    for(j = 1; (c = getchar()) != EOF && c != '\n'; ++j)
         s[j] = c;

    reverse(s,j);
 
    s[j + 1] = '\0';
        

}

void reverse(char s[], int n)
{ 
    int i;
    printf("%d\n",n);

    
    for(i = 1; i < n + 1; ++i)
    {
    
       s[i] = s[n - 1];
            

    }

    printf("reverse: ");
    for(i = 1; i < n; i++)
         printf("%c",s[i]);
         if(s[i] == '\0')
             printf("\n");

    getlinet();

}
