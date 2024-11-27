    #include<stdio.h>
    int main()  // C is the noly function which is auto defined and called by compiler
    {
        message();   //calling void function [with name and empty paranthesis as parameters are void]
        return 0;
    }
    void message(void)
    {//return type is void so no value is returned and no parameter would be accepted as it is void
        printf("Welcome in C programming");
    }