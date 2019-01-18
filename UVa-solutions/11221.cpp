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
#define vi vector<ll>
#define vii vector<pair<ll, ll> >

const ld PI = acosl(-1.0);

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    stringstream ss;
    string str;
    getline(cin,str);
    ss.clear();
    ss<<str;
    ll t;
    ss>>t;
    for(ll k=0; k<t; k++)
    {
        string str1="";
        char ch;
        getline(cin,str);
        ss.clear();
        ss<<str;
        ll len,c=0;
        while(ss>>ch)
        {
            if(ch>='a' && ch<='z')
                str1+=ch;
        }
        len=str1.length();
        for(ll i=0; i<len/2; i++)
        {
            if(str1[i]!=str1[len-1-i])
            {
                c=1;
                break;
            }
        }
        cout<<"Case #"<<k+1<<":\n";
        if(c==1)
            cout<<"No magic :(";
        else
        {
            if(len==(ll)sqrt(len)*(ll)sqrt(len))
                cout<<sqrt(len);
            else
                cout<<"No magic :(";
        }
        cout<<"\n";
    }
    return 0;
}