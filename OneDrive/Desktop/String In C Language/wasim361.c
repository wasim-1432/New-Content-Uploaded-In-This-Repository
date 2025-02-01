#include<stdio.h>
#include<string.h>
char Calculate_Length_Of_A_Given_String(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Calculate_Length_Of_A_Given_String(str);
    printf("\n");
    return 0;
}
char Calculate_Length_Of_A_Given_String(char str[])
{
    int l;
    for(l=0;str[l];l++);
    printf("Length of given string is=%d",l);
}