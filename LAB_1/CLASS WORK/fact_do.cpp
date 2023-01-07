//factorial with do while loop
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    long long int fact=1;
   cin>>a;
    do{
        fact*=a;
        a--;
    }while(a>0);
   cout<<fact;
    return 0;
}