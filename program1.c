#include <stdio.h>
#include <stdlib.h>
long count_no_one(long n)
{
    long i=0,j=1;
    long c=0;
    for(i=1;i<=n;i++)
    {
        j=i;
        while(j!=0)
        {
            if(j%10==1)
                c++;
            j=j/10;
        }
    }
    return c;
}
int main()
{
    long n,k;
    printf("enter the n\n");
    scanf("%d",&n);
    k=count_no_one(n);
    printf("%d",k);
    return 0;
}
