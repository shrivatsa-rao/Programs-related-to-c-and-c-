#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter the input\n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
        printf("it is a character\n");
    else
        if(ch>='0' && ch<='9')
            printf("it is a digit\n");
    else
        printf("it is special symbol\n");
    return 0;
}
