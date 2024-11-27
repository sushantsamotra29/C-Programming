#include<stdio.h>
int main()
{
    int x;
    abc:
    printf(" Enter NUmber : ");
    int z = scanf("%d", &x);  
       //Additional inputs added or strings added in input are stored in input buffer.[temperory cache]. due to this it 
       //runs infinitely due yo buffer memory stored 
    fflush(stdin);    //fflush used to delete the values in buffer [and helped to not run it infinite]
    if(z==0)
    printf("x=%d",x);
    return 0;
} // if entered correct input as integer it will  display it.
//if entered a character or string it will infinte it as goto is used.