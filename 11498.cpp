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

int main()
{
	alpha

	ll t,x,y,n,m;
	while(1)
	{
		cin>>t;
		if(t==0)
			break;
		cin>>n>>m;
		while(t--)
		{
			cin>>x>>y;
			if(x==n || y==m)
				cout<<"divisa";
			else if(x>n && y>m)
				cout<<"NE";
			else if(x<n && y>m)
				cout<<"NO";
			else if(x>n && y<m)
				cout<<"SE";
			else
				cout<<"SO";
			cout<<"\n";
		}
	}
	return 0;
}