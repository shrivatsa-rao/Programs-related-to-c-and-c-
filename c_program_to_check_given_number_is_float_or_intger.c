#include <stdio.h>
#include <string.h>

int main()
{
    char num[10];
    int flag=0,i=0;
    int len;
    printf("enter the number\n");
    scanf("%s",num);
    len=strlen(num);
    while(num[i++]!='\0')
    {
        if(num[i]=='.')
        {
            flag=1;
            break;
        }
    }
    if(flag)
        printf("it is a float value\n");
    else
        printf("then it is integer\n");
    return 0;
}

