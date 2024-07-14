// //Make a program to check whether a numbwer is prime or not.

// #include <stdio.h>

// int main(){
//     int n, isprime=0;
//     printf("Enter the number:\n");
//     scanf(" %d", &n);

//     for (int i = 2; i < n; i++)
//     {
//         if (n%i == 0)
//         isprime = 1;
//         break;
//     }

//     if(isprime){
//         printf("The number %d is not Prime Number", n);
//     }

//     else{
//         printf("The number %d is Prime Number", n);
//     }
    
//     return 0;
// }




#include <stdio.h>

int main() {
    int n, i, isPrime = 1; // isPrime is used as a flag

    printf("Enter the number:\n");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0; // Found a divisor, not a prime number
                break; // Exit the loop since we found a divisor
            }
        }
    }

    if (isPrime == 1) {
        printf("The number %d is a Prime Number\n", n);
    } else {
        printf("The number %d is not a Prime Number\n", n);
    }

    return 0;
}