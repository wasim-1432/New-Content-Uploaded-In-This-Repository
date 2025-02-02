#include<stdio.h>
#include<string.h>
char Check_Whether_A_Given_String_Is_Palindrome_Or_Not(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    if(Check_Whether_A_Given_String_Is_Palindrome_Or_Not(str))
    {
        printf("Palindrome String");
    }
    else
    {
        printf("Not Palindrome String");
    }
    printf("\n");
    return 0;
}
char Check_Whether_A_Given_String_Is_Palindrome_Or_Not(char str[])
{
    int i,l;
    for(l=0;str[l];l++);
    for(i=0;str[i];i++)
    {
        if(str[i]==str[l-1-i])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}