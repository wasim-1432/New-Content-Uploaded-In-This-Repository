#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],ctr[30];
    int i,j;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    strcpy(ctr,str);
    printf(ctr);
    printf("\n");
    return 0;
}