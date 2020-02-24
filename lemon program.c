#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=a*7;
    if (c>b)
    {
    printf("do u want xtra %d lemons",c-b);
    }
    else if (c==b)
    {
        printf("u r having %d lemons",c);
    }
    else
    {
        printf("u r not having %d lemons",b-c);
    }
 
 
    return 0;
}
