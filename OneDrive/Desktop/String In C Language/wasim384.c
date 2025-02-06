#include<stdio.h>
#include<string.h>
char *Reverse_Of_Given_String(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("%s",Reverse_Of_Given_String(str));
    printf("\n");
    return 0;
}
char *Reverse_Of_Given_String(char str[])
{
    int l,i,j=-1,k;
    char s[50][30];
    for(l=0;str[l];l++);
    for(i=0;i<l;i++)
    {
        for(j++,k=0;str[j]!=' ' && str[j]!='\0';j++,k++)
        {
            s[i][k]=str[j];
        }
        s[i][k]='\0';
    }
    strcpy(str,s[l-1]);
    strcat(str," ");
    for(i=l-2;i>0;i--)
    {
        strcat(str,s[i]);
        strcat(str," ");
    }
    strcat(str,s[0]);
    strcat(str,"\0");
    return str;
}