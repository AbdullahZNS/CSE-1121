/*Reverse a Number: Input a number and print its reverse.*/

#include<stdio.h>
int main()
{
int num;
printf("Enter a positive integer number: ");
scanf("%d", &num);

int mod, reverse;
reverse = 0;

while(num > 0)
{
mod = num %  10;
reverse = 10 * reverse + mod;
num = num / 10;
}

printf("Reverse number: %d" , reverse);    
    
    
    
    
    return 0;
}
