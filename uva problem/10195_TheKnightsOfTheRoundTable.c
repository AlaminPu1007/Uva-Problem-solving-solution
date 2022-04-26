#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        double x=0,ans=0;
        x=((a+b+c)/2);
        ans=((x-a)*(x-b)*(x-c))/x;
        printf("%lf\n",sqrt(ans));
    }
    return 0;
}
