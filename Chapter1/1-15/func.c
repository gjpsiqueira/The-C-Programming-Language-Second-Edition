#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
#define EXIT 0

void convert();

main()
{

  printf("fahr\tcelsius\n");  
  convert();


  return EXIT;


}

void convert()
{
   int fahr, celsius;
   for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
   {      celsius = 5 * (fahr - 32) / 9;
          printf("%d\t%d\n",fahr,celsius);
         

   }
  //return celsius;
   


} 



