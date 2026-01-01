#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin>>n;
        int x=2*n;
        int a[x];
        int even=0,odd=0;

        for (int i=0;i<x;i++)
        {
            cin>>a[i];
            if (a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if(even==odd)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
}
