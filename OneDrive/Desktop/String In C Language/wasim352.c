#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i,l;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    for(l=0;str[l];l++);
    for(i=0;str[i];i++)
    {
        if(i<=l/2)
        {
            char temp;
            temp=str[i];
            str[i]=str[l-i-1];
            str[l-i-1]=temp;
        }
    }
    printf("Reverse String=%s",str);
    printf("\n");
    return 0;
}