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

map <ll,ll> snake,ladder;

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t,a,b,c,x,y;
    cin>>t;
    while(t--)
    {
    	cin>>a>>b>>c;
    	ll players[a];
    	for(ll i=0; i<a; i++) players[i]=1;
    	for(ll i=0; i<b; i++)
    	{
    		cin>>x>>y;
    		if(x>y) snake[x]=y;
    		else ladder[x]=y;
    	}
    	ll k=0;
    	for(ll i=0; i<c; i++)
    	{
    		cin>>x;
    		if(k==0)
    		{
    			players[i%a]+=x;
    			if(ladder[players[i%a]]!=0)
    				players[i%a]=ladder[players[i%a]];
    			else if(snake[players[i%a]]!=0)
    				players[i%a]=snake[players[i%a]];
    			if(players[i%a]==100) k=1;
    		}
    	}
    	for(ll i=0; i<a; i++)
    		cout<<"Position of player "<<i+1<<" is "<<players[i]<<".\n";
    	snake.clear();
    	ladder.clear();
    }
    return 0;
}