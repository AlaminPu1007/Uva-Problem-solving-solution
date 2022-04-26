#include<iostream>
using namespace std;
long long int result(int n);
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int t;
        cin>>t;
        cout<<result(t)<<endl;
    }
    return 0;
}
long long int result(int n)
{
    long long int sum=0;
    for(int i=1;i<=n;i=i+1)
        {
            sum=(sum+(n/i));
        }
        return sum;
}
