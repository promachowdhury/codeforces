#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string word[n];
    for(int i = 0; i < n; i++)
    {
        cin >> word[i];
    }
    string word1="Tetrahedron";
    string word2="Cube";
    string word3="Octahedron";
    string word4="Dodecahedron";
    string word5="Icosahedron";
    int sum=0;
    for(int i = 0; i < n; i++)
    {
        if(word[i]==word1)
        {
            sum+=4;
        }
        if(word[i]==word2)
        {
            sum+=6;
        }
        if(word[i]==word3)
        {
            sum+=8;
        }
        if(word[i]==word4)
        {
            sum+=12;
        }
        if(word[i]==word5)
        {
            sum+=20;
        }


    }
    cout<<sum;

}
