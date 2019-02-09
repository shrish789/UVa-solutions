#include <bits/stdc++.h>
using namespace std;

#define alpha ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define ff first
#define ss second
#define input(v,n) for(ll ppp=0; ppp<n; ppp++) cin>>v[ppp]
#define output(v,n) for(ll ppp=0; ppp<n; ppp++) cout<<v[ppp]<<" "
#define PI 3.141592653

typedef long long ll;

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll k;
    vector <pair<ll, ll> > v;
    while(cin>>k)
    {
    	v.clear();
    	for(ll i=k+1; i<=2*k; i++)
    		if(i*k%(i-k)==0)
    			v.pb(mp(i*k/(i-k), i));

    	cout<<v.size()<<"\n";
    	for(ll i=0; i<v.size(); i++)
    		cout<<"1/"<<k<<" = 1/"<<v[i].ff<<" + 1/"<<v[i].ss<<"\n";
    }
    return 0;
}