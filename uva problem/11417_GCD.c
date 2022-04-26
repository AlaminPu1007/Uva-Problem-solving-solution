#include<stdio.h>
int gcd( int n1,int n2);
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        int i,j,G=0;
        for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
        {
            G+=GCD(i,j);
        }
         printf("%d\n",G);
    }
    return 0;
}

    int GCD(int n1,int n2)
    {
        int i,j,Gcd=0;
        for(i=1;i<=n1&&i<=n2;i++)
        {
            if(n1%i==0&&n2%i==0)
            {
                Gcd=i;
            }
        }
        return Gcd;
        ///also accepted it when use this wile loop,,
        /*
        while(n1!=n2)
        {
            if(n1>n2)
            {
                n1=n1-n2;
            }
            else
            {
                n2=n2-n1;
            }
        }
        */
    }
