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

typedef long long ll;

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll a,i,pos;
    vector <ll> v;
    while(cin>>a)
    {
    	// if(v.empty())
    	// {v.pb(a);cout<<v[0]<<"\n";continue;}
    	pos=upper_bound(v.begin(),v.end(),a)-v.begin();
    	v.pb(a);
    	for(i=v.size()-1; i>=pos; i--)
    		v[i]=v[i-1];
    	v[pos]=a;
    	//output(v,v.size());
    	//cout<<" ";
    	if(v.size()%2==1)
    		cout<<v[v.size()/2];
    	else
    		cout<<(v[v.size()/2]+v[v.size()/2-1])/2;
    	cout<<"\n";
    }
    return 0;
}