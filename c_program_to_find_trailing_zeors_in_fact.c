#include <stdio.h>
#include <stdlib.h>
int tra(int n)
{
  int result = 0;
  for (int i = 5; i <= n; i *= 5)
  {
    result += n / i;
  }
  return result;
}
int main()
{
    int n,k;
    printf("enter n\n");
    scanf("%d",&n);
    k=tra(n);
    printf("%d",k);

    return 0;
}