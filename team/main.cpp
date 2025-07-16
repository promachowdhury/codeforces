#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int x,y,z;
        cin>>x;
        cin>>y;
        cin>>z;
        if((x==1&&y==1)||(y==1&&z==1)||(x==1&&z==1))
        {
            ans++;
        }

    }
    cout<<ans;
}
