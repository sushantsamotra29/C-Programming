#include<stdio.h>
int main()
{
    char x;
    printf("Enter Alphabet : ");
    scanf("%c",&x);    {
        printf("%c is a Vowel and is Uppercase",x);
    }
    else if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        printf("%c is a Vowel and is Lowercase",x);
    }
    else{
        printf("%c is a Consonant",x);
    }
    return 0;
}