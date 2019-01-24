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
#define min3(a, b, c) min(a,min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a,max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define vi vector<ll>
#define vii vector<pair<ll, ll> >

const ld PI = acosl(-1.0);

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll n,m;
    set<ll> s1,s2;
    set<ll>::iterator it;
    while(cin>>n>>m && n!=0 && m!=0)
    {
    	ll x,cnt=0;
    	for(ll i=0; i<n; i++)
    		cin>>x,s1.insert(x);
    	for(ll i=0; i<m; i++)
    		cin>>x,s2.insert(x);
    	for(it=s1.begin(); it!=s1.end(); it++)
    	{
    		if(s2.find(*it)!=s2.end())
    			cnt++;
    	}
    	cout<<cnt<<"\n";
    	s1.clear();
    	s2.clear();
    }
    return 0;
}