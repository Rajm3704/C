//que-4 using for and do-while loop

#include <stdio.h>

int main(){
    //for loop
    int sum=0;
    /* for (int i = 1; i <= 10; i++)
    {
        sum += i;
    } */

   //do-while loop
   int i = 1;
   do
   {
    sum = sum + i;
    i++;
   } while (i<=10);
   

    printf("The sum of first 10 natural no. is %d", sum);
    
    return 0;
}