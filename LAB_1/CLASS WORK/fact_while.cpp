//factorial with while loop
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    long long int fact=1;
   cin>>a;
    while(a>0){
        fact*=a;
        a--;
    }
   cout<<fact;
    return 0;
}