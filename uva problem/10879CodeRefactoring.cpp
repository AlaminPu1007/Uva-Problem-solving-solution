///tried but not solved yet,,..
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    while(n--)
    {
        long long int i,j,sum=0,a,b[100],t=0;
        cin>>a;
        for(i=1;i<=a/2;i++)
        {
            if(a%i==0)
            {
                b[t]=i;
                t++;
            }
        }
        for(i=0;i<t;i++)
        {
            if(b[i]*b[i+1]==a)
            {
                cout<<b[i]<<" "<<b[i+1];
            }
        }
    }
    return 0;
}
