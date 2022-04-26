///tried but not solved yet.....
#include<stdio.h>
int main()
{
    int n,c[100];
    while(scanf("%d",&n)!=EOF)
    {
        int flag=0,i,j;
           for(i=1;i<=n;i++)
            {
                flag=0;
                for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0&&i!=1)
                {
                    c[i]=i;
                }
         }

             for(i=0;i<=n;i++)
             {
                    if(n%c[i]==0)
                    {
                        c[i]=i;
                        int max=0,k;
                        for(k=0;k<n;k++)
                        {
                            if(max<c[k])
                            {
                                max=c[k];
                            }
                        }
                        printf("%d",c[k]);

                    }
            }
    }
    return 0;
}
