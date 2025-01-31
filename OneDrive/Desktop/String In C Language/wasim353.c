#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i,count1=0,count2=0,count3=0;
    printf("Enter any character\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            count1++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            count2++;
        }
        else
        {
            count3++;
        }
    }
    printf("Total number of alphabet in a given string=%d\n",count1);
    printf("Total number of digit in a given string=%d\n",count2);
    printf("Total number of special character in a given string=%d",count3);
    printf("\n");
    return 0;
}