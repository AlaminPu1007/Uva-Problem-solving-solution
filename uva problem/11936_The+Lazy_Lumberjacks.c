#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if((a+b)<=c)
        {
            printf("Wrong!!\n");
        }
        else if((a+c)<=b)
        {
            printf("Wrong!!\n");
        }
        else if((b+a)<=c)
        {
            printf("Wrong!!\n");
        }
        else if((b+c)<=a)
        {
            printf("Wrong!!\n");
        }
        else if((c+a)<=b)
        {
            printf("Wrong!!\n");
        }
        else if((c+b)<=a)
        {
            printf("Wrong!!\n");
        }
        else
        {
            printf("OK\n");
        }
    }
    return 0;
}
