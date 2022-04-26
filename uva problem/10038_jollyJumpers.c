#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i,a[100],b[100],sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            //printf("%d\t",a[i]);
            b[sum]=a[i]-a[i+1];
            if(b[sum]<0)
            {
                printf("result first  is = %d \t",b[sum]*(-1));
            }

           //else printf("result is = %d \t",b[sum]);
        }
    }
    return 0;
}
