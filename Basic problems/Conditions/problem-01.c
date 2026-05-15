/*Even or Odd:Take an integer input and print whether it is even or odd.*/
#include<stdio.h>
int main()
{
int N;
printf("Enter an integer number: ");
scanf("%d",&N);

if(N % 2 == 0)
{
printf("Even\n");
}
else
{
printf("Odd\n");
}

  
  
  return 0;
}
