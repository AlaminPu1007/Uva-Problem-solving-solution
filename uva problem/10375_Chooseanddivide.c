///tried but not solved yet...
#include <stdio.h>
int main()
{
    int i,r=0,p=0,q=0,s=0;
    long long int result=0,result1=0,sum=1,sum2=1,sum3=1,add=1,add2=1,add3=1;
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
        sum=(sum*i);
    }
    printf("For P %lld\n",sum);
    scanf("%d",&q);
     for(i=1;i<=q;i++)
    {
        sum2=(sum2*i);
    }
    printf("For Q %lld\n",sum2);
     for(i=1;i<=(p-q);i++)
    {
        sum3=(sum3*i);
    }
    printf("For (P-Q) %lld\n",sum3);
    result=sum/(sum3*sum2);
    printf("result is %lld\n",result);

    ///start r s part

    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        add=(add*i);
    }
    printf("For r %lld\n",add);
    scanf("%d",&s);
     for(i=1;i<=s;i++)
    {
        add2=(add2*i);
    }
    printf("For S %lld\n",add2);
     for(i=1;i<=(r-s);i++)
    {
        add3=(add3*i);
    }

    printf("For (R-S) %lld\n",add3);
    result1=add/(add3*add2);


    printf("result1 is %lld\n",result1);
    float total;
    total=(result1 / result);
    printf("%.5lf\n",total);
    //printf("result is long =%f\n",(float)(result/result1));

    return 0;
}

