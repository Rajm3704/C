//Write a program containing a function which reverses the array passed to it.

#include <stdio.h>

int printarray();

void reverse();

int main(){
    int array[] = {1,2,3,4,5};

    printarray(array, 5);
    reverse(array, 5);
    printarray(array, 5);
    
    return 0;
}

int printarray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void reverse(int a[], int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }

}