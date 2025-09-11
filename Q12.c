//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main()
{
    int a;
    printf("enter an integer: ");
    scanf("%d", &a);

    if( a >= 0 ){
        if(a>0){
            printf("it is a positive no.");
        }
        else{
            printf("zero");
        }

    }
    else{
        printf("it is a negative no.");
    }
    

    return 0;
}