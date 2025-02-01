#include<stdio.h>
#include<string.h>
char Transform_String_Into_Lowercas(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Transform_String_Into_Lowercas(str);
    printf("\n");
    return 0;
}
char Transform_String_Into_Lowercas(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("Lowercase string is=%s",str);
}