//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main(){

    int a,b,c,discriminant,root1,root2;

    //ax² + bx + c = 0
    printf("enter coefficient of a");
    scanf("%d",&a);
    printf("enter coefficient of b");
    scanf("%d",&b);
    printf("enter coefficient of c");
    scanf("%d",&c);

    discriminant= b*b-4*a*c ;
    
    //real and distinct root
    if(discriminant>0){
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct : %d , %d",root1,root2);
    }
    
    //real and equal root
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal : %d , %d",root1,root2);
    }
    
    //complex root
    else {
        
        printf("Roots are imaginary (complex).\n");
    }
    
    return 0;
}