#include<stdio.h>
//Write a program to calculate the area and circumference of a circle given its radius
int main()
{
    int a;
    printf("enter radius of circle : ");
    scanf("%d", &a);

    printf("circumference of the circle is %f", (2*3.14)*a );
    printf("\narea of the circle is : %f", 3.14*(a*a) );

    return 0;
}