/* Multiplication Table: Input a number and print its multiplication table.*/

#include<stdio.h>
int main()
{
int N;
printf("Enter an integer number: ");
scanf("%d",&N);

int i;
for(i = 1; i <= 10; i++)
{
printf("%d x %2d = %3d\n", N,i,N*i);
}


return 0;
}
