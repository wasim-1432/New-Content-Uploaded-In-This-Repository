#include<stdio.h>
#include<string.h>
char Find_Character_In_A_Given_String_Between_Specified_Indices(char str[],char ch,int start,int end);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);
    int start,end;
    printf("Enter the starting index value\n");
    scanf("%d",&start);
    printf("Enter the ending index value\n");
    scanf("%d",&end);
    if(Find_Character_In_A_Given_String_Between_Specified_Indices(str,ch,start,end))
    {
        printf("Index of given character in given string=%d",Find_Character_In_A_Given_String_Between_Specified_Indices(str,ch,start,end));
    }
    else
    {
        printf("Not found");
    }
    printf("\n");
    return 0;
}
char Find_Character_In_A_Given_String_Between_Specified_Indices(char str[],char ch,int start,int end)
{
    int index;
    for(index=start;index<=end;index++)
    {
        if(str[index]==ch)
        {
            return index;
        }
    }
    if(str[index]!=ch)
    {
        return 0;
    }
}