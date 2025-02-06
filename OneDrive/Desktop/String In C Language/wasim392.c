#include<stdio.h>
#include<string.h>
int Find_Word_In_A_Given_String(char str[],char str1[]);
int main()
{
    char str[50],str1[20];
    printf("Enter any string\n");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter any word\n");
    fgets(str1,20,stdin);
    str1[strlen(str1)-1]='\0';
    Find_Word_In_A_Given_String(str,str1);
    printf("\n");
    return 0;
}
int Find_Word_In_A_Given_String(char str[],char str1[])
{
    int l,i,j=-1,k;
    char s[50][50];
    for(l=0;str[l];l++);
    for(i=0;i<l;i++)
    {
        for(j++,k=0;str[j]!=' ' && str[j]!='\0';j++,k++)
        {
            s[i][k]=str[j];
        }
        s[i][k]='\0';
    }
    for(i=0;i<=50;i++)
    {
        if(strcmp(s[i],str1)==0)
        {
            printf("Found");
            return 1;
        }
        if(s[i][0]=='\0')
        {
            break;
        }
    }
    printf("Not Found");
    return 0;
}