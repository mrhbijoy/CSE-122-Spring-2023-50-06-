#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;
 

int main()
{
    ll l,m,count=0;
   string s,a;
   cin>>s;
   sort(s.begin(),s.end());
   l=s.length();
   m=(l/2)+1;
   s.erase(0,m-1);
   for(ll i=0;i<m;i++){
       count++;
       cout<<s[i];
       if(count!=m){
        cout<<"+";
       }
 
 
   }
 
 
return 0;
}