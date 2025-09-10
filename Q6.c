#include<stdio.h>
//Write a program to swap two numbers using a third variable.
int main()
{
    int a,b,c;
    printf("A = ");
    scanf("%d", &a);
    printf("B =");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("after swaping");
    printf("\nA = %d", a);
    printf("\nB = %d", b);

    
    return 0;
}