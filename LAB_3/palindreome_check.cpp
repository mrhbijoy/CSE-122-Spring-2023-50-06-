#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str)
{
    int l = 0;
    int h = str.length() - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin >> s;

    reverse(s.begin(), s.end());

    cout << s << endl;
    
    cout << isPalindrome(s) << endl;
  
}