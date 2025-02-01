#include<stdio.h>
#include<string.h>
char Swap_Two_Characters_Of_A_Given_String_With_Specified_Indices(char str[],int index1,int index2);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    int index1,index2;
    printf("Enter the index of two characters for swapping\n");
    scanf("%d%d",&index1,&index2);
    Swap_Two_Characters_Of_A_Given_String_With_Specified_Indices(str,index1,index2);
    printf("\n");
    return 0;
}
char Swap_Two_Characters_Of_A_Given_String_With_Specified_Indices(char str[],int index1,int index2)
{
    char temp;
    temp=str[index1];
    str[index1]=str[index2];
    str[index2]=temp;
    printf(str);
}