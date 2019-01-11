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

    stringstream ss;
    string str;
    ll t;
    getline(cin,str);
    ss.clear();
    ss<<str;
    ss>>t;
    while(t--)
    {
    	vector <ll> v;
    	ll x,k,d,ans=0,k1;
    	getline(cin,str);
    	ss.clear();
    	ss<<str;
    	ss>>x;
    	while(ss>>x)
    		v.pb(x);

    	ss.clear();
    	getline(cin,str);
    	ss<<str;
    	ss>>d;
    	getline(cin,str);
    	ss.clear();
    	ss<<str;
    	ss>>k;
    	k1=0;
    	ll j=0,z;
    	while(k>k1)
    	{
    		ans=0;
    		z=1;
    		j++;
    		k1+=j*d;
    		ans+=v[0];
    		for(ll i=1; i<v.size(); i++)
    		{
    			z*=j;
    			ans+=v[i]*z;
    		}
    	}
    	cout<<ans<<"\n";
    }
    return 0;
}