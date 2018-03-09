#include <stdio.h>
#include <stdlib.h>

int binsearch(int x, int v[], int n);

int main(void)
{

    int v[7] = {0,5,10,15,20,25};
    int x = 5;
    int n = 7;

    printf("%d\n",binsearch(x,v,n));

    return EXIT_SUCCESS;

}


int binsearch(int x, int v[], int n)
{

    int low, high, mid;
    
    low = 0;

    high = n - 1;

    while(low <= high) {

       
         mid = (low + high) / 2;

         if(x < v[mid])
             high = mid - 1;
         else 
             low = mid + 1;

    }
   
    return (x == v[mid]) ? mid : -1;


}

