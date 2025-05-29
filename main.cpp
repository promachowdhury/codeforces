#include <iostream>
#include<string>
using namespace std;
int main()
{
    int j,n;
    cin>>n;
    for(j=1;j<=n;j++)
    {
        string str;
    cin>>str;
    int x=str.size();
    if(x>10)
    {
        for(int i=0;i<x;i++)
        {
            if(i==0)
            {
                cout<<str[i]<<x-2;
            }
            if(i==x-1)
            {
                cout<<str[i]<<endl;
            }
        }
    }
    else
        cout<<str;
        cout<<endl;

    }


}
