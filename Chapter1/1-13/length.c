#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_LENGTH 100


main()
{
    int i;
    int j;
    int n;
    int state;
    int c;
    int count;
    int length[MAX_LENGTH];

    state = IN;
    count = OUT;
    n = OUT;
    
    for(i = 0; i <= MAX_LENGTH; i++) length[i] = 0;

    while((c = getchar()) != EOF)
    {

        if(c == ' ' || c == '\n' || c == '\t')
        {
                   
            state = OUT;
            n++;
        } 
        else if(state == IN)
        {

             ++count;

        }
        else if(state == OUT)
        {

             length[n] = count;
             count = OUT;
             state = IN; 
           
        }
   

    }


    for(i = 1; i <= n - 1; ++i)
    {
         printf("%d: ",i);
        for(j = 1; j <= length[i]; ++j)
             printf("-");

       printf("\n");
            
       

    }

}


