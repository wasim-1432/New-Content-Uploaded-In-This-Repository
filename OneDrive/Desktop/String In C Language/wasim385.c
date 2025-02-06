#include<stdio.h>
#include<string.h>
int case_incentive(char str1[],char str2[]);
int main()
{
    char str1[30],str2[30];
    printf("Enter first string\n");
    fgets(str1,30,stdin);
    str1[strlen(str1)-1]='\0';
    printf("Enter second string\n");
    fgets(str2,30,stdin);
    str2[strlen(str2)-1]='\0';
    if(case_incentive(str1,str2))
    {
        printf("Same String");
    }
    else
    {
        printf("Not same string");
    }
    printf("\n");
    return 0;
}
int case_incentive(char str1[],char str2[])
{
    int i;
    for(i=0;str1[i]!=str2[i];i++)
    {
        if(str1[i]>='A' && str1[i]<='Z')
        {
            str1[i]=str1[i]+32;
            if(str1[i]!=str2[i])
            {
                return 0;
            }
        }
        else if(str1[i]>='a' && str1[i]<='z')
        {
            str1[i]=str1[i]-32;
            if(str1[i]!=str2[i])
            {
                return 0;
            }
        }
    }
    return 1;
}