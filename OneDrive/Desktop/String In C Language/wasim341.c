#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int l;
    printf("Enter any string\n");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(l=0;str[l];l++);
    printf("Length of given string=%d",l);
    printf("\n");
    return 0;
}