#include<stdio.h>
int number(int n)
{
    int r,rever=0,copy;
    copy=n;
    while(n!=0)
    {
        r=n%10;
        rever=rever*10+r;
        n/=10;
    }
    if(copy==rever)
    {
        return copy;
    }
    else {
        int s=copy+rever;
        return s;
    }
}
int main()
{
    int i,number,su=0;
    int number(r);
}






















/*
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int count=0;
        int n,reverse=0,copy=0,reminder;
        scanf("%d",&n);
        copy=n;
        while(n!=0)
        {
            reminder=n%10;
            reverse=reverse*10+reminder;
            n/=10;
        }
        if(copy==reverse)
        {
            count++;
            printf("%d %d\n",count,copy);
        }
        else
        {
            count++;
            int x=copy+reverse;
            int copy1=0,reverse1=0,reminder1;
            copy1=x;
            while(x!=0)
            {
                reminder1=x%10;
                reverse1=reverse1*10+reminder1;
                x/=10;
            }
            if(copy1==reverse1)
            {
                printf("%d %d\n",count,copy1);
            }
            else
            {
                count++;
                int y=copy1+reverse1;
                int copy2=0,r,sum=0;
                copy2=y;
                while(y!=0)
                {
                    r=y%10;
                    sum=sum*10+r;
                    y/=10;
                }

                if(copy2==sum)
                {
                    printf("%d %d\n",count,copy2);
                }
                else
                {
                    count++;
                    int g=copy2+sum;
                    int copy3=0,sum1=0,r1;
                    copy3=g;
                    while(g!=0)
                    {
                        r1=g%10;
                        sum1=sum1*10+r1;
                        g/=10;
                    }
                    if(copy3==sum1)
                    {
                        printf("%d %d\n",count,copy3);
                    }
                    else
                    {
                        count++;
                        int h=copy3+sum1;
                        int copy4=0,sum2=0,r2;
                        copy4=h;
                        while(h!=0)
                        {
                            r2=h%10;
                            sum2=sum2*10+r2;
                            h/=10;
                        }
                        if(copy4==sum2)
                        {
                            printf("%d %d\n",count,sum2);
                        }
                        else
                        {
                            count++;
                            int e=copy4+sum2;
                            int copy5=0,sum3=0,r3;
                            copy5=e;
                            while(e!=0)
                            {
                                r3=e%10;
                                sum3=sum3*10+r3;
                                e/=10;
                            }
                            if(copy5==sum3)
                            {
                                printf("%d %d\n",count,sum3);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
*/
