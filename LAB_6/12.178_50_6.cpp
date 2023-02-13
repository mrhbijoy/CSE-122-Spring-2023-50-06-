#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int r=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            r++;
        }
    }
    cout<<r;
}