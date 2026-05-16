#include<stdio.h>
#include<stdbool.h>
int main()
{
int N;
printf("Enter a positve number: ");
scanf("%d", &N);

bool is_prime = true;
if(N == 0 || N == 1)
{
printf("%d is not a prime number", N);    
}

for(int i = 2; i <= N/2; i++)
{

if(N % i == 0)
{
is_prime = false; 
break;
}

}

if(is_prime)  
{
printf("%d is a prime number.");    
}
else
{
printf("%d isn't a prime number.");    
}
return 0;    
}
