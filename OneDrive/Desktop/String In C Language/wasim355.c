#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],ch;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter any character\n");
    scanf("%c",&ch);
    int index,i;
    for(index=0;str[index];index++)
    {
        if(str[index]==ch)
        {
            printf("Index of given character in a given string=%d",index+1);
            break;
        }
    }
    if(str[index]!=ch)
    {
        printf("%c not found in given string",ch);
    }
    printf("\n");
    return 0;
}