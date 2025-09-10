#include<stdio.h>
int main()
{
    int a,b;
    printf("enter first no.");
    scanf("%d", &a);
    printf("enter second no.");
    scanf("%d", &b);

    printf("sum of a & b is : %d", a + b );
    printf("\ndifference of a & b is : %d", a - b );
    printf("\nproduct of a & b is : %d", a * b );
    printf("\nquotient of a & b is : %d", a / b );

    return 0;
}