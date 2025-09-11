//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 1st no: ");
    scanf("%d", &a);
    printf("enter 2nd no: ");
    scanf("%d", &b);
    printf("enter 3rd no: ");
    scanf("%d", &c);

    if(a>b && a>c){
        printf("a is largest among all");
    }
    else if(b>a && b>c){
        printf("b is largest among all");
    }
    else{
        printf("c is largest among all");
    }
    
    return 0;
}
