#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b=0,e=0,m=0,n=0,c,sum=0,count=0,i;
        scanf("%d",c);
        for(i=0;i<c;i++)
        {
            scanf("%d",&a);
            if((a>60&&a<90)&&(a>60&&a<120))
            {
                b=30;
                e=30;
            }
            else if((a>30)&&(a>60))
            {
                m=10;
                n=15;
            }
            else if((a>60&&a<60)&&(a>60))
            {
                m=10;
                n=15;
            }

        }


    }
}
