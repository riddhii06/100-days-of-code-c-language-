#include<stdio.h>
//Write a program to input time in seconds and convert it to hours:minutes:seconds format
int main()
{
    int ts,hrs,min,sec;
    printf("enter time in second :");
    scanf("%d", &ts);

    hrs = ts / 3600;         
    min = (ts % 3600) / 60; 
    sec = ts % 60; 

    printf("hours:minutes:seconds:  %d : %d : %d", hrs,min,sec);

    return 0;
}



