#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    float y;
    double z;
    char ch;
    printf("Enter Character Value = ");
    scanf("%c" , &ch);
    printf("Enter Integer Value = ");
    scanf("%d" , &x);
    printf("Enter float Value = ");
    scanf("%f" , &y);
    printf("Enter Double Value = ");
    scanf("%lf" , &z);
    printf(" x = %d," ,x);
    printf(" y = %f," ,y);
    printf(" z = %lf," ,z);
    printf(" ch = %c," ,ch);
    return 0;
} 
