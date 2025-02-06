#include<stdio.h>
#include<string.h>
char Make_First_Character_Of_Each_Word_Of_The_String_Capital(char str[]);
int main()
{
    char str[50];
    printf("Enter any string\n");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    Make_First_Character_Of_Each_Word_Of_The_String_Capital(str);
    printf("\n");
    return 0;
}
char Make_First_Character_Of_Each_Word_Of_The_String_Capital(char str[])
{
    int i=1;
    if(str[0]>='a' && str[0]<='z')
    {
        str[0]=str[0]-32;
    }
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            i=i+1;
            str[i]=str[i]-32;
        }
        i++;
    }
    printf(str);
}