#include<stdio.h>
int main()
{
    int a,b;
    printf("enter length : ");
    scanf("%d", &a);
    printf("enter breadth : ");
    scanf("%d", &b);

    printf("perimeter of rectangle is : %d", 2*(a+b) );
    printf("\narea of the rectangle is : %d", a*b );

    return 0;
}