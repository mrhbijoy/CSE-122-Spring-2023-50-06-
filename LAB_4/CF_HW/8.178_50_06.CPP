//CODEFORCES PROBLEM NO - 112A
//CODEFORCES PROBLEM NAME - Petya and Strings
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string string1,string2;
    cin>>string1>>string2;
    //int l=string1.length();
    transform(string1.begin(), string1.end(), string1.begin(), ::tolower);
    transform(string2.begin(), string2.end(), string2.begin(), ::tolower);
    if(string1>string2){
        cout<<"1"<<endl;
    }else if(string1==string2){
        cout<<"0"<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}