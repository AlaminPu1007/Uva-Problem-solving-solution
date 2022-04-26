#include<stdio.h>
int main()
{
    int n,count=0;
    long a,b,c;
    scanf("%d",&n);
    while(n--)
    {
        count++;
        scanf("%ld %ld %ld",&a,&b,&c);
            if(a+b>c && b+c>a && c+a>b)
            {
                if(a==b && b==c)
                {
                    printf("Case %d: Equilateral\n",count);
                }
                else if(a==b||b==c||a==c)
                {
                    printf("Case %d: Isosceles\n",count);
                }
                else if(a!=b||b!=c||c!=a)
                {
                    printf("Case %d: Scalene\n",count);
                }
            }
            else
            {
                printf("Case %d: Invalid\n",count);
            }
        }
        return 0;
}
