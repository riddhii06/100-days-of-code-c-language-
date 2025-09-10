#include<stdio.h>
//Write a program to convert temperature from Celsius to Fahrenhei
int main()
{
    int a;
    printf("enter temperature in Fahrenheit");
    scanf("%d", &a);

    printf("temp. in Celsius : %d", (a - 32) * 5/9);

    return 0;
}