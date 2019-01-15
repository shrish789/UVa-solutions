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

    ll b,s,bachelor[100000],spinster[100000],t=1;
    while(1)
    {
    	cin>>b>>s;
    	if(b==0 && s==0)
    		break;
    	input(bachelor,b);
    	input(spinster,s);
    	cout<<"Case "<<t++<<": ";
    	if(b<=s)
    		cout<<0;
    	else
    		cout<<b-s<<" "<<*min_element(bachelor, bachelor+b);
    	cout<<"\n";
    }
    return 0;
}