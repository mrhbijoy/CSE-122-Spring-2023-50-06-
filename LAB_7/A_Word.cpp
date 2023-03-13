#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
typedef std::vector<long long> vi;
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define rf(i, a, b) for (ll i = a; i >= b; i--)
#define F first
#define S second
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007
#define PB push_back
#define MP make_pair
#define PI 3.14159265358979323846
#define all(a) a.begin(), a.end()
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
const ll INF = LLONG_MAX / 2;
const ll N = 2e5 + 1;
using namespace std;
void solve()
{
    string s;
    cin >> s;
    ll n = s.length();
    ll c = 0;
    fr(i, 0, n)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            c++;
    }
    if (c > n - c)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }  
}
 
int main()
{
    fast;
        solve();
}