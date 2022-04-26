#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,i,s,c,j,temp;;
    while(cin>>a>>b)
    {
        s=0;
        cout<<a<<" "<<b<<" ";
        if(a>b)
        {
            temp=b;
            b=a;
            a=temp;
        }
        for(i=a;i<=b;i++)
        {
            c=1;
            j=i;
            while(j!=1)
            {
                c++;
                if(j%2==0)
                {
                    j/=2;
                }
                else
                {
                    j=(j*3)+1;
                }
            }
            if(c>=s)
            {
                s=c;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
