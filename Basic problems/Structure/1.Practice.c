/*
Create a structure named Book with the following members: id (integer), 
title (character array/string), and price (float). Inside the main() function, 
declare a structure variable, assign data to it (Example: ID: 1, Title: "C Programming", 
Price: 250.50), and then print the book's information on the screen. 
(Note: You must use the strcpy() function to assign the title).


*/



#include <stdio.h>
#include<string.h>

struct Book
{
int id;
char title[30];
double price;
};

int main()
{
struct Book B;
B.id = 1221;
strcpy(B.title, "Teach yourself C");
B.price = 250;

printf("---Book information---\n");
printf("Id    :CSE-%d\n",B.id);
printf("Title :%s\n",B.title);
printf("Price :%.2lf\n",B.price);

    return 0;
}


