#include<stdio.h>
#include<string.h>
char Reverse_A_String(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Reverse_A_String(str);
    printf("\n");
    return 0;
}
char Reverse_A_String(char str[])
{
    int i,l;
    char temp;
    for(l=0;str[l];l++);
    for(i=0;str[i];i++)
    {
        if(i<=l/2)
        {
            temp=str[i];
            str[i]=str[l-i-1];
            str[l-i-1]=temp;
        }
    }
    printf("Reverse string is=%s",str);
}