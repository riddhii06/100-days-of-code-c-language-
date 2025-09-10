#include<stdio.h>
//Write a program to swap two numbers without using a third variable
int main()
{
    int a,b;
    a =(int) 4;
    b = (int)6;
    printf("a= %d", a);
    printf("\nb= %d",b);

    a = a + b;
    b= a - b;
    a = a -b ;

    printf("\nafter swap \n a= %d", a);
    printf("\nb= %d",b);

    
}