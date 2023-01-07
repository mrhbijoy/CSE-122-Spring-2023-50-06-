//swap with pointer
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int *p1=&a, *p2=&b;
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<a<<" "<<b;
    return 0;
}
