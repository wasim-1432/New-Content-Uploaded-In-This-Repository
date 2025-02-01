#include<stdio.h>
#include<string.h>
char Count_Vowels_In_A_Given_String(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Count_Vowels_In_A_Given_String(str);
    printf("\n");
    return 0;
}
char Count_Vowels_In_A_Given_String(char str[])
{
    char V[10]="aeiouAEIOU";
    int i,j,count=0;
    for(i=0;str[i];i++)
    {
        for(j=0;V[j];j++)
        {
            if(str[i]==V[j])
            {
                count++;
            }
        }
    }
    printf("Total Vowels in given string=%d",count);
}