/*Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/
#include<stdio.h>
int main(){
    int a,b,c;

    printf("enter length if 1st side");
    scanf("%d",&a);
    printf("enter length if 2nd side");
    scanf("%d",&b);
    printf("enter length if 3rd side");
    scanf("%d",&c);

    if(a==b && a==c){
        printf("eqilateral triangle");
    }
    else if(a!=b && a!=c && b!=c){
        printf("scalene triangle");
    }
    else{
        printf("isosceles triangle");
    }


    return 0;
}