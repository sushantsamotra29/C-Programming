#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int a;
    printf("Enter the value of a = ");
    scanf("%d" ,&a);
    if(a%2==0) {
       printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }
    return 0;
}