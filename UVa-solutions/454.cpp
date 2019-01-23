#include<bits/stdc++.h>
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
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    string s,x,m,l;
    int n;
    cin>>n;
    getline(cin,x);
    getline(cin,x);
    while(n--)
    {
        map<string,string>mp;
        vector<string>v;
        while(getline(cin,x))
        {
            if(x=="")
                break;
            s="";
            v.pb(x);
            stringstream ss(x);
            while(ss>>l)
                s+=l;
            sort(s.begin(),s.end());
            mp[x]=s;

        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size()-1; i++)
            for(int j=i+1; j<v.size(); j++)
                if(mp[v[i]]==mp[v[j]])
                    cout<<v[i]<<" = "<<v[j]<<endl;
        if(n)
            cout<<endl;
    }
    return 0;
}