#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define alpha ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define ff first
#define ss second
#define input(v,n) for(ll ppp=0; ppp<n; ppp++) cin>>v[ppp]
#define output(v,n) for(ll ppp=0; ppp<n; ppp++) cout<<v[ppp]<<" "
#define PI 3.141592653
#define vi vector<ll>
#define vii vector<pair<ll, ll> >

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll n,d,r;
    while(1)
    {
    	cin>>n>>d>>r;
    	if(n==0 && d==0 && r==0)
    		break;
    	ll a[n],b[n],ans=0;
    	input(a,n);
    	input(b,n);
    	sort(a, a+n);
    	sort(b, b+n, greater<ll>());
    	for(ll i=0; i<n; i++)
    	{
    		if(a[i]+b[i]-d>0)
    			ans+=a[i]+b[i]-d;
    	}
    	cout<<ans*r<<"\n";
    }
    return 0;
}