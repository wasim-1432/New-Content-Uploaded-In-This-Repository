#include<stdio.h>
#include<string.h>
char Return_Index_Of_First_Occurrence(char str[],char ch);
int main()
{
    char str[30],ch;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter any character\n");
    scanf("%c",&ch);
    if(Return_Index_Of_First_Occurrence(str,ch)!=-1)
    {
        printf("Index of first occurrence is=%d",Return_Index_Of_First_Occurrence(str,ch));
    }
    else if(Return_Index_Of_First_Occurrence(str,ch)==-1)
    {
        printf("Given character is not available in a given string");
    }
    printf("\n");
    return 0;
}
char Return_Index_Of_First_Occurrence(char str[],char ch)
{
    int index;
    for(index=0;str[index];index++)
    {
        if(str[index]==ch)
        {
            return index+1;
            break;
        }
    }
    if(str[index]!=ch)
    {
        return -1;
    }
}