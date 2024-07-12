/*Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user*/

#include <stdio.h>

int main(){
    int income, tax=0;
    printf("Enter the income in Lacs\n");
    scanf("%d", &income);
    
    if(income < 250000){
        printf("Your Income is not Taxable");
    }
    else if(250000<income && income<500000){
        tax = (0.05*(income-250000));
        printf("Your Income fall under Tax Slab of 5%%\n");
    }
    else if(500000<income && income<1000000){
        tax = (0.05*(500000-250000) + 0.2*(income-500000));
        printf("Your Income fall under Tax Slab of 20%%\n");
    }
    else{
        tax = (0.05*(500000-250000) + 0.2*(1000000-500000) + 0.3*(income-1000000));
        printf("Your Income fall under Tax Slab of 30%%\n");
    }

    printf("You have to give Tax of total %d rs on your total income of %d", tax, income);
    return 0;
}