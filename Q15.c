//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>
int main(){
    char ch;
    printf("enter a character : ");
    scanf(" %c", &ch);

    if(ch >= 'a' && ch <= 'z'){
        printf("its lowercase alphabet");
    }
    else if(ch>= 'A' && ch<= 'Z'){
        printf("its uppercase alphabet");
    }
    else if(ch >= '0' && ch <= '9'){
        printf("its a digit");
    }
    else{
        printf("its a special character");
    }

    return 0;
}