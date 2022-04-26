#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    while(n--)
    {
        long long int r=0,c=0,a,sum,t=0;
        cin>>a;
        while(1)
        {
            sum=0;
            r=0;
            c=a;
            while(a!=0)
            {
                r=a%10;
                sum=sum*10+r;
                a/=10;
            }
            if(sum==c)
            {
                cout<<t<<" "<<sum<<endl;
                break;
            }
            a=sum+c;
            t++;
        }
    }
    return 0;
}
