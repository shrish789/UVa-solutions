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

    ll t,i;
    cin>>t;
    ll a[3];
    for(i=1; i<=t; i++)
    {
    	input(a,3);
    	sort(a,a+3);
    	cout<<"Case "<<i<<": "<<a[1]<<"\n";
    }
    return 0;
}