/*Fibonacci Series: Print first N Fibonacci numbers.*/
#include<stdio.h>
int main()
{
int N;
printf("Enter the terms of fibonacci series: ");
scanf("%d",&N);

int d1, d2, fibo;
d1 = 0;
d2 = 1;
printf("%d %d ", d1, d2);
fibo = d1 + d2;

for(int i = 3; i<= N; i++)
{
printf("%d ", fibo);

d1 = d2;
d2 = fibo;
fibo = d1 + d2;
}
    
    return 0;
}
