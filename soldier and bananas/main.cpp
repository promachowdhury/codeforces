#include <iostream>
using namespace std;
int main()
{
    int t,n,x,w;
    cin>>t;
    cin>>n;
    cin>>x;
    int sum=0;
    for(int i=1;i<=x;i++)
    {
        sum+=i*t;
    }
    if(sum>n)
    {
        w=sum-n;
        cout<<w;
    }
    else
    {
        cout<< "0";
    }
}
