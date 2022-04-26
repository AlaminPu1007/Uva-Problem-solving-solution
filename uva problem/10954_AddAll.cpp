#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        vector<int> v1,v2;
        int i,j,t,c=0;
        for(i=0;i<n;i++)
        {
            cin>>t;
            v1.push_back(t);
        }
        for(i=0;i<v1.size();i++)
        {
            //cout<<v1[i]<<" ";
            c=v1[i]+v1[i+1];
            c=c+v1[i+2];
           // c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
