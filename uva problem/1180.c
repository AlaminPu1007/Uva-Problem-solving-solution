#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
   while(a--)
   {
       int n,i,p;
        int count=0;
        scanf("%d",&p);
        n=pow(2,(p-1))*(pow(2,p)-1);
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                count=count+i;
            }
        }
        if(count==n)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
   }
    return 0;
}
