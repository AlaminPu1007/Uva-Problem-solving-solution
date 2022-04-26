///time limit
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long long int i,flag,count=0,j,a,b;
        scanf("%lld%lld",&a,&b);
        for(i=a;i<=b;i++)
        {
            flag=0;
            for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                long long int r,copy=0,sum=0;
                copy=i;
                while(copy!=0)
                {
                    r=copy%10;
                    sum=sum+r;
                    copy/=10;
                }
                    long long int k,l,flag2=0;
                for(k=2;k<=sqrt(sum);k++)
                {
                    if(sum%k==0)
                    {
                        flag2=1;
                        break;
                    }
                }
                if(flag2==0)
                {
                    count++;
                }
        }
    }
    printf("%lld\n",count);
  }
    return 0;
}
