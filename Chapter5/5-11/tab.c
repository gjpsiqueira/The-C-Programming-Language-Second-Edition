#include <stdio.h>

int main(int argc, char *argv[])
{

    int i;
    for(i = 1; i < argc; i++)
       printf("%s: %d",argv[i],i);

    printf("\n");

    
    char *ps = argv[1];
  
    printf("pointer ps point to array position 1\n");
    printf("%s\n",ps);

    return 0;
}


