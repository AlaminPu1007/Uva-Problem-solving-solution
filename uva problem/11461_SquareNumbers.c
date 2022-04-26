#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,i,count,r=0;
    while(scanf("%d%d",&a,&n)!=EOF)
    {
        if(a==0&&n==0)
        {
            break;
        }
        count=0;
        for(i=a;i<=n;i++)
        {
            r=sqrt(i);
            if((r*r)==i)
            {
                count++;
            }
        }
         printf("%d\n",count);
    }
    return 0;
}
