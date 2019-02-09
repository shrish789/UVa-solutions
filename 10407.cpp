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

    vi v;
    while(1)
    {
        ll x;
        cin>>x;
        if(x==0)
            break;
        v.pb(x);
        while(1)
        {
            cin>>x;
            if(x==0)
                break;
            v.pb(x);
        }
        sort(v.begin(), v.end());
        ll GCD=0;
        for(ll j=0; j<v.size(); j++)
        {
            for(ll k=j+1; k<v.size(); k++)
            {
                GCD=__gcd(abs(v[j]-v[k]),GCD);
            }
        }
        cout<<GCD<<"\n";
        v.clear();
    }
    return 0;
}