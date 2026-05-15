/*Grade Calculator: Input marks and print grade:
80-
100     	→ A
70–79	 	→ B
60–69 	→ C
50–59 	→ D
Below 50 	→ F*/

#include<stdio.h>
int main()
{
int marks;
printf("Enter obtained marks: ");
scanf("%d",&marks);

if(marks >= 80 && marks <= 100)
{
printf("CSE-1121: A");
}

else if(marks >= 70 && marks <= 79)
{
printf("CSE-1121: B");
}

else if(marks >= 60 && marks <= 69)
{
printf("CSE-1121: C");
}

else if(marks >= 50 && marks <= 59)
{
printf("CSE-1121: D");
}

else
{
printf("CSE-1121: F");    
}

}
