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

    stringstream ss;
    string str;
    getline(cin, str);
    ss.clear();
    ss<<str;
    ll n;
    ss>>n;
    while(n--)
    {
    	getline(cin, str);
    	ss.clear();
    	ss<<str;
    	ll x,GCD=1;
    	vi v;
    	while(ss>>x) v.pb(x);
    	for(ll i=0; i<v.size(); i++)
    		for(ll j=i+1; j<v.size(); j++)
    			if(__gcd(v[i],v[j])>GCD) GCD=__gcd(v[i],v[j]);

    	cout<<GCD<<"\n";
    }
    return 0;
}