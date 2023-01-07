//factorial with for loop
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    long long int fact=1;
   cin>>a;
    for(int i=1; i<=a; i++){
        fact*=i;
    }
   cout<<fact;
    return 0;
}