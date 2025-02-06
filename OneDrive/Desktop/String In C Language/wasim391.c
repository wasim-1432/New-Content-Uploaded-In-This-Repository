#include<stdio.h>
#include<string.h>
char Count_Frequency_Of_Given_String(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Count_Frequency_Of_Given_String(str);
    printf("\n");
    return 0;
}
char Sort_Of_Given_String(char str[])
{
    int r,l,i;
    char ch;
    l=strlen(str);
    for(r=1;r<=l-1;r++)
    {
        for(i=0;i<=l-r-1;i++)
        {
            if(str[i]>=str[i+1])
            {
                ch=str[i];
                str[i]=str[i+1];
                str[i+1]=ch;
            }
        }
    }
}
char Count_Frequency_Of_Given_String(char str[])
{
    int i,count=1;
    char temp[100];
    Sort_Of_Given_String(str);
    strcpy(temp,str);
    printf("Frequency of each character is\n");
    for(i=0;temp[i];i++)
    {
        if(temp[i]==temp[i+1])
        {
            count++;
        }
        else 
        {
            printf("%c-%d\n",temp[i],count);
            count=1;
        }
    }
}