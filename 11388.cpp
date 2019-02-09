#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define alpha ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define ff first
#define ss second
#define input(v,n) for(ll ppp=0; ppp<n; ppp++) cin>>v[ppp]
#define output(v,n) for(ll ppp=0; ppp<n; ppp++) cout<<v[ppp]<<" "
#define vi vector<ll>
#define vii vector<pair<ll, ll> >

const ld PI = acosl(-1.0);

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--)
    {
    	ll a,b;
    	cin>>a>>b;
    	if(__gcd(a,b)==a && a*b/__gcd(a,b)==b) cout<<a<<" "<<b;
    	else cout<<-1;
    	cout<<"\n";
    }
    return 0;
}