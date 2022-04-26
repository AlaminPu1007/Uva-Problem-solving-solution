#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int i,a[100],b[100],c,j,t=0;
        scanf("%d",&c);
        for(i=0;i<c;i++)
        {
            scanf("%d",&a[i]);
            t=a[i]-t;
        }
        if(t<0)
        {
            printf("for t=%d\n",(-1)*t);
        }
        else
        {
            printf("for t=%d\n",t);
        }


    }
    return 0;
}
