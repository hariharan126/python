#include <stdio.h>

int main()
{
    int days,msg;
    float data;
    scanf("%d %d %f",&days,&msg,&data);
    if (days<84)
    {
        printf("you are having %d days to recharge \n",84-days);
   
    if (msg<100)
    {
        printf("you are having %d msg for today \n",100-msg);
    }
    else
    {
        printf("you have reached maximum for today \n");
    }
    if (data<1.5)
    {
        printf("you are having %f data for today \n",1.5-data);
    }
    else
    {
        printf("you have used the today data \n");
        }
    }
    else
    {
        printf("your pack has expired \n");
    }
    return 0;
}
