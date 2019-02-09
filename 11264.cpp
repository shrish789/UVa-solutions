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
ll n,a[1000];
ll solve(ll sum)
{
	ll cnt=0;
	for(ll i=n-1; i>=0; i--)
	{
		if(sum>=a[i])
			cnt++,sum%=a[i];
	}
	return cnt;
}

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	input(a,n);
    	ll mx=1,sum=1;

    	for(ll i=1; i<=n-1; i++)
    	{
    		ll k=solve(sum+a[i]);
    		if(k>mx)
    			sum+=a[i],mx=k;
    		//cout<<sum<<" ";
    	}
    	cout<<mx<<"\n";
    }
    return 0;
}