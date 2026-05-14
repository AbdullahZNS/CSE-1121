/*Sum of First N Numbers: Input N and print sum of numbers from 1 to N.*/

#include<stdio.h>
int main()
{
int N;
printf("Enter an integer: ");
scanf("%d", &N);

int i, sum = 0;
for(i = 1; i <= N; i++)
{
sum += i;
}
printf("The summation from 1 to %d : %d", N,sum);

return 0;
}
