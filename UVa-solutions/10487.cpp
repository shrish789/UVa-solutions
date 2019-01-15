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

    ll n,m,a[1001],b[26],t=1,mn,x,y;
    while(cin>>n && n!=0)
    {
    	input(a,n);
    	cin>>m;
    	input(b,m);
    	sort(a, a+n);
    	cout<<"Case "<<t++<<":\n";
    	for(ll i=0; i<m; i++)
    	{
    		mn=1e10;
    		for(ll j=0; j<n; j++)
    		{
    			for(ll k=j+1; k<n; k++)
    			{
    				if((abs(a[j]+a[k]-b[i]))<mn)
    					mn=abs(a[j]+a[k]-b[i]),x=a[j],y=a[k];
    			}
    		}
    		cout<<"Closest sum to "<<b[i]<<" is "<<x+y<<".\n";
    	}
    }
    return 0;
}