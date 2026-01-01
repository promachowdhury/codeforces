#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        int sum1=a+b;
        int sum2=b+c;
        int sum3=c+a;
        if(sum1==c)
        {
            cout<< "Yes"<<endl;
        }
        else if(sum2==a)
        {
            cout<< "Yes"<<endl;
        }
        else if(sum3==b)
        {
            cout<< "Yes"<<endl;
        }
        else
        {
            cout<< "No"<<endl;
        }




    }
}
