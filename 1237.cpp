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
    	ll d,q,x;
    	cin>>d;
    	ll a[10000],b[10000];
    	string str[10000];
    	for(ll i=0; i<d; i++)
    		cin>>str[i]>>a[i]>>b[i];
    	
    	cin>>q;
    	while(q--)
    	{
    		cin>>x;
    		ll cnt=0;string str1;
    		for(ll i=0; i<d; i++)
    		{
    			if(x>=a[i] && x<=b[i])
    				cnt++,str1=str[i];
    			if(cnt>1)
    				break;
    		}
    		if(cnt==1)
    			cout<<str1;
    		else cout<<"UNDETERMINED";
    		cout<<"\n";
    	}
    	if(t)
    		cout<<"\n";
    }
    return 0;
}