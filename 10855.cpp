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

    ll n,m;
    while(1)
    {
    	cin>>n>>m;
    	if(n==0 && m==0)
    		return 0;
    	char str[n+5][n+5],s1[m+5][m+5],s2[m+5][m+5],s3[m+5][m+5],s4[m+5][m+5];
    	for(ll i=0; i<n; i++)
    		cin>>str[i];
    	for(ll i=0; i<m; i++)
    		cin>>s1[i];
    	
    	for(ll i=0; i<m; i++)
			for(ll j=0; j<m; j++)
				s2[j][m-i-1]=s1[i][j];
    	
    	for(ll i=0; i<m; i++)
			for(ll j=0; j<m; j++)
				s3[j][m-i-1]=s2[i][j];
    	
    	for(ll i=0; i<m; i++)
			for(ll j=0; j<m; j++)
				s4[j][m-i-1]=s3[i][j];
    	
    	ll cnt[4]={0};
		for(ll i=0; i<n-m+1; i++)
		{
			for(ll j=0; j<n-m+1; j++)
			{
				ll t[4]={0};
				for(ll k1=0; k1<m; k1++)
				{
					for(ll k2=0; k2<m; k2++)
					{
						if(s1[k1][k2]==str[i+k1][j+k2])
							t[0]++;
						if(s2[k1][k2]==str[i+k1][j+k2])
							t[1]++;
						if(s3[k1][k2]==str[i+k1][j+k2])
							t[2]++;
						if(s4[k1][k2]==str[i+k1][j+k2])
							t[3]++;
					}
				}
				//cout<<t[1]<<" ";
				for(ll k3=0; k3<4; k3++)
					if(t[k3]==m*m) cnt[k3]++;
			}
		}
		//output(cnt, 4);
		cout<<cnt[0]<<" "<<cnt[1]<<" "<<cnt[2]<<" "<<cnt[3];
    	cout<<"\n";
    }
    return 0;
}