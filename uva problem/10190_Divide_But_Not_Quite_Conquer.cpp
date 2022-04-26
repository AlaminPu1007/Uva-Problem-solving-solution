#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if (n<2 || m<2)
        {
            printf("Boring!\n");
        }
        vector<long> a;
        int i,r=0,sum=0,c=0,s=0;
        c=n;
        while(n!=1)
        {
            n/=m;
            a.push_back(n);
            sum=n%m;
            if(sum==1)
            {
                s++;
            }
        }
        if(s==1||s==0)
        {
            cout<<c<<" ";
            for(i=0;i<a.size();i++)
            {
                cout<<a[i]<<" ";
            }
        }
        else
        {
            cout<<"Boring!";
        }
         cout<<endl;
    }
    return 0;
}
