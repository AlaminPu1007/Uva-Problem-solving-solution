#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i,flag=0,copy,flag1=0;
        copy=n;
            for(i=2;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(n>11)
            {
                int r,sum=0,j;
                while( copy!=0 )
                    {
                        r = copy%10;
                        sum = sum*10 + r;
                        copy /= 10;
                    }
                for(j=2;j<=sum/2;j++)
                {
                    if(sum%j==0)
                    {
                        flag1=1;
                        break;
                    }
                }
            }
            else flag1=1;
        if((flag==0&&flag1==1))
        {
            printf("%d is prime.\n",n);
        }
        else if(flag==0&&flag1==0)
        {
            printf("%d is emirp.\n",n);
        }
        else
        {
            printf("%d is not prime.\n",n);
        }
    }
    return 0;
}
