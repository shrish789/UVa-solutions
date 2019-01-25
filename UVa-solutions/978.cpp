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

    multiset <ll,greater<ll> > s1,s2;
    multiset <ll,greater<ll> >::iterator it1,it2;
    ll t,x;
    cin>>t;
    while(t--)
    {
        ll n,sb,sg;
        cin>>n>>sg>>sb;
        for(ll i=0; i<sg; i++)
        {
            cin>>x;
            s1.insert(x);
        }
        for(ll i=0; i<sb; i++)
        {
            cin>>x;
            s2.insert(x);
        }
        while(!s1.empty() && !s2.empty())
        {
            it1=s1.begin();
            it2=s2.begin();
            vi v1,v2;
            for(ll i=0; i<n && !s1.empty() && !s2.empty(); i++)
            {

                ll diff=abs(*it1-*it2);
                if(*it1>*it2)
                    v1.pb(diff);
                else if(*it2>*it1)
                    v2.pb(diff);

                s1.erase(s1.find(*it1));
                s2.erase(s2.find(*it2));
                it1=s1.begin();
                it2=s2.begin();
            }
            for(ll i=0; i<v1.size(); i++)
                s1.insert(v1[i]);
            for(ll i=0; i<v2.size(); i++)
                s2.insert(v2[i]);
        }
        if(s1.empty() && s2.empty())
        {
            cout<<"green and blue died\n";
        }
        else if(s1.empty())
        {
            cout<<"blue wins\n";
            for(it2=s2.begin(); it2!=s2.end(); it2++)
                cout<<*it2<<"\n";
        }
        else
        {
            cout<<"green wins\n";
            for(it1=s1.begin(); it1!=s1.end(); it1++)
                cout<<*it1<<"\n";
        }
        if(t)
            cout<<"\n";
        s1.clear();
        s2.clear();
    }
    return 0;
}