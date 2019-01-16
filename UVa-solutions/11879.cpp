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

ll a[110];
void calculate()
{
    a[0]=1;
    for(ll i=1; i<110; i++)
        a[i]=a[i-1]*10%17;
}

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    calculate();
    string str;
    while(cin>>str)
    {
        if(str=="0")
            break;
    
        ll sum=0,len=str.length();
        for(ll i=0; i<len; i++)
        {
            sum+=(str[len-i-1]-'0')*a[i];
            sum=sum%17;
        }
        if(sum==0)
            cout<<1;
        else
            cout<<0;
        cout<<"\n";
    }
    return 0;
}