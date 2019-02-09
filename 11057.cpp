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

    ll n;
    ll freq[1000001];
    while(cin>>n)
    {
    	ll a[n],m;
    	memset(freq, 0, 1000001);
    	for(ll i=0; i<n; i++)
    		cin>>a[i],freq[a[i]]++;
    	cin>>m;
    	sort(a, a+n);//output(a,n);
    	ll mn=1e10,x,y;
    	for(ll i=0; i<n; i++)
    	{
    		if(binary_search(a, a+n, m-a[i]) && abs(m-2*a[i])<mn)
    		{
    			if(m==2*a[i] && freq[a[i]]==1)
    				continue;
    			mn=abs(m-2*a[i]),x=a[i],y=m-a[i];
    		}
    	}
    	cout<<"Peter should buy books whose prices are "<<min(x,y)<<" and "<<max(x,y)<<".\n\n";
    }
    return 0;
}