#include <bits/stdc++.h>
using namespace std;

#define alpha ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define ff first
#define ss second
#define input(v,n) for(ll ppp=0; ppp<n; ppp++) cin>>v[ppp]
#define output(v,n) for(ll ppp=0; ppp<n; ppp++) cout<<v[ppp]<<" "

typedef long long ll;

struct sub
{
	ll k;
    ll a[9];
    ll penalty;
    ll solved;
    bool attempt;
}s[100];

bool comparesub(sub x, sub y)
{
	if(x.solved!=y.solved)
		return x.solved>y.solved;
	else if(x.penalty!=y.penalty)
		return x.penalty<y.penalty;
	else
		return x.k<y.k;
}

int main()
{
    //alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	
	ll t;
	stringstream ss;
    string str;
    getline(cin,str);
    ss.clear();
    ss<<str;
    ss>>t;
    getline(cin,str);
    while(t--)
    {
    	char ch1;
    	ll x,y,ch;
    	
    	for(ll i=0; i<100; i++)
    	{
    		for(ll j=0; j<9; j++)
    			s[i].a[j]=0;
    		s[i].penalty=0;
    		s[i].solved=0;
    		s[i].k=i+1;
    		s[i].attempt=false;
    	}

    	while(getline(cin,str))
    	{//cout<<str<<"\n";
    		if(str.empty()) break;
    		ss.clear();
    		ss<<str;
    		ss>>ch>>x>>y>>ch1;
    		s[ch-1].attempt=true;
    		if(ch1=='I' && s[ch-1].a[x-1]!=-1)
    			s[ch-1].a[x-1]++;
    		else if(ch1=='C' && s[ch-1].a[x-1]!=-1)
    			s[ch-1].penalty+=s[ch-1].a[x-1]*20+y,s[ch-1].solved++,s[ch-1].a[x-1]=-1;
    	}

    	sort(s, s+100, comparesub);
    	
    	for(ll i=0; i<100; i++)
    		if(s[i].attempt==0)
				continue;
    		else
    			cout<<s[i].k<<" "<<s[i].solved<<" "<<s[i].penalty<<"\n";
    	if(t)
    		cout<<"\n";
    }
    return 0;
}