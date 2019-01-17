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

ll solve2(ll sum, ll n, ll i)
{
    for(ll k=1; k<=n/i; k++) 
        sum+=n/k;

    return sum;
}

ll solve1(ll n)
{
    ll sum=0,i=1;
    while(n/i>10000)
        sum+=(n/i-n/(i+1))*i,i++;

    return solve2(sum, n, i);
}

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<solve1(n)<<"\n";
    }
    return 0;
}