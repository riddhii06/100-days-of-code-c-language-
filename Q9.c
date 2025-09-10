#include<stdio.h>
#include<math.h>
//Write a program to calculate simple and compound interest for given principal, rate, and time
int main()
{
    float p,r,t,si,ci,amt;
    printf("principal = ");
    scanf("%f", &p);
    printf("rate =");
    scanf("%f", &r);
    printf("time =");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    amt = p * pow((1 + r / 100), t);
    ci = amt - p;

    printf("simple interest is : %f \n", si);
    printf("compound interest is : %f \n", ci);
    
    
    return 0;
}