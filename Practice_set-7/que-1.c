//Create an array of 10 element.Verify the (ptr+2) points to the third element of that array.

#include <stdio.h>

int main(){
    int arr[10] = {1,5,6,8,2,9,0,4,7,6};
    int* p =arr;

    printf("The element with value %d at address %u\n", *p, p);
    printf("The element with value %d at address %u\n", *(p+2), p+2);
    return 0;
}