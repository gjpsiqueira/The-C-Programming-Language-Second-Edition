#include <stdio.h>

void strcatest(char *s, char *t)
{

     char *x;
     char *y;

     for(x = s; *s != '\0'; s++)
            ;

 

     for(y = s; *t != '\0'; s++,t++)
           *s = *t; 
         


    

}

int main(void)
{

    char s[] = "Gustavo";
    char t[] = "Schirley";
    strcatest(&s,&t);

    printf("It Worked! %s\n",s);
    return 0;


}




