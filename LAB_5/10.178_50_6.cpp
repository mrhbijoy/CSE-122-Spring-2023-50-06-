#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    gets(s);
    
    if(s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] = s[0] - 32;
    }
    
    printf("%s\n",s);
}