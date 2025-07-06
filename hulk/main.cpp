#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n==1)
        {
            cout<< "I hate ";
        }
        else
        {
            if(i%2!=0)
            {
                cout<< "I hate ";
            }
            else
            {
                cout<< "I love ";
            }
        }
        if(i<n)
        {
            cout<< "that ";
        }
        if(i==n)
        {
            cout<< "it";
        }
    }
}
