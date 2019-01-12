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

    ll t;
    cin>>t;
    for(ll k=1; k<=t; k++)
    {
    	ll n,cnt=0;
    	cin>>n;
    	string s;
    	cin>>s;
    	ll a[n+3]={0};
    	for(ll i=0; i<n; i++)
    	{
    		if(s[i]=='.')
    		{
    			if(a[i]!=1)
    				a[i]=1,a[i+1]=1,a[i+2]=1,cnt++,i+=2;
    		}
    		else
    			a[i]=2;
    	}
    	cout<<"Case "<<k<<": "<<cnt<<"\n";
    }
    return 0;
}