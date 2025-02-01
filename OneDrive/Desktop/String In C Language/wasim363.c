#include<stdio.h>
#include<string.h>
char Compare_Given_Two_Strings(char str1[],char str2[]);
int main()
{
    char str1[30],str2[30];
    printf("Enter first string\n");
    fgets(str1,30,stdin);
    str1[strlen(str1)-1]='\0';
    printf("Enter second string\n");
    fgets(str2,30,stdin);
    str2[strlen(str2)-1]='\0';
    printf("%d",Compare_Given_Two_Strings(str1,str2));
    printf("\n");
    return 0;
}
char Compare_Given_Two_Strings(char str1[],char str2[])
{
    return strcmp(str1,str2);
}