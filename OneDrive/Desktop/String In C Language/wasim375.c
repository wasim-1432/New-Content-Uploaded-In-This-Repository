#include<stdio.h>
#include<string.h>
int Check_Whether_A_Given_String_Is_Alphanumeric_Or_Not(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Check_Whether_A_Given_String_Is_Alphanumeric_Or_Not(str);
    printf("\n");
    return 0;
}
int Check_Whether_A_Given_String_Is_Alphanumeric_Or_Not(char str[])
{
    int i,isAlpha,isNumeric;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            isAlpha=1;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            isNumeric=1;
        }
    }
    if(isAlpha==1 && isNumeric==1)
    {
        printf("Alphanumeric String");
    }
    else
    {
        printf("Not Alphanumeric String");
    }
}