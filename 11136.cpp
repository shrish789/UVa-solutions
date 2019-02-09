#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define alpha ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define ff first
#define ss second
#define input(v,n) for(ll ppp=0; ppp<n; ppp++) cin>>v[ppp]
#define output(v,n) for(ll ppp=0; ppp<n; ppp++) cout<<v[ppp]<<" "
#define min3(a, b, c) min(a,min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a,max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define vi vector<ll>
#define vii vector<pair<ll, ll> >

const ld PI = acosl(-1.0);

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll n;
    multiset <ll> s;
    multiset <ll>::iterator it;
    while(cin>>n && n!=0)
    {
        ll x,sum=0,mn,y;
        while(n--)
        {
            cin>>y;
            while(y--)
            {
                cin>>x;
                s.insert(x);
            }            
            it=s.end();
            it--;
            sum+=*it-*s.begin();
            s.erase(s.begin());
            s.erase(it);
        }
        s.clear();
        cout<<sum<<"\n";
    }
    return 0;
}