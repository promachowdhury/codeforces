
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int count=0;
    int day;
    if(a>b)
    {
        count=b;
        a=a-b;
        b=0;
    }
    if(a<b)
    {
        count=a;
        b=b-a;
        a=0;
    }
    if(a>b&&b==0)
    {
        day=a/2;
    }
    if(a<b&&a==0)
    {
        day=b/2;
    }
    if(a==b)
    {
        count=a;
        day=a-b;
    }
    cout<<count<< " "<<day;

}
