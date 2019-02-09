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


    ll t;
    cin>>t;
    while(t--)
    {
    	ll a,b,c;
    	cin>>a>>b>>c;
    	vector <ll> v;
    	ll ck=0;
    	for(ll i=-b; i<=b; i++)
    	{
    		if(i==0)
    			continue;
    		if(b%i==0)
    			v.pb(i);
    	}
    	for(ll i=0; i<v.size(); i++)
    	{
    		for(ll j=i+1; j<v.size(); j++)
    		{
    			for(ll k=j+1; k<v.size(); k++)
    			{
    				if(v[i]+v[j]+v[k]==a && v[i]*v[i]+v[j]*v[j]+v[k]*v[k]==c && v[i]*v[j]*v[k]==b)
    				{
    					cout<<v[i]<<" "<<v[j]<<" "<<v[k];
    					ck=1;
    				}
    				if(ck)
    					break;
    			}
    			if(ck)
    				break;
    		}
    		if(ck)
    			break;
    	}
    	if(!ck)
    		cout<<"No solution.";
    	cout<<"\n";
    }
    return 0;
}