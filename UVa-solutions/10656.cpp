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
#define vi vector<ll>
#define vii vector<pair<ll, ll> >

const long double PI = acosl(-1.0);

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll n;
    while(cin>>n && n!=0){
        ll a[n],sum=0;
        input(a,n);
        vi v;
        for(ll i=0; i<n; i++){
            if(a[i]!=0)
                v.pb(a[i]);
        }
        if(v.empty())
            cout<<0;
        else{
            for(ll i=0; i<v.size(); i++){
                cout<<v[i];
                if(i!=v.size()-1) cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}