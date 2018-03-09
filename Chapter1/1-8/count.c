#include <stdio.h>


main()
{

   int c;
   int bl, tb, nl = 0;

   while((c = getchar()) != EOF)
   {

        if(c == ' ')
        {
 
             ++bl;          
        }
        else if(c == '\t')
        {

             ++tb;
 
        }
        else if(c == '\n')
        {

             ++nl;
        }
      

   }


   printf("blanks \t tabs \t newlines \t\n");
   printf("%d\t%d\t%d\t\n",bl,tb,nl);


}








