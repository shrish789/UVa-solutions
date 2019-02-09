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

ll power(ll x, ll n, ll p)
{
    ll res=1;
    x=x%p;
    while(n>0)
    {
        if(n&1)
            res=res*x%p;
        n>>=1;
        x=x*x%p;
    }
    return res;
}

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll x,n,p;
    while(cin>>x)
    {
        cin>>n>>p;
        cout<<power(x, n, p)<<"\n";
    }
    return 0;
}