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

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    string s;
    while(1)
    {
    	cin>>s;
    	bool check;
    	if(s=="#")
    		break;
    	check=next_permutation(s.begin(), s.end());
    	if(check==false)
    		cout<<"No Successor";
    	else
    		cout<<s;
    	cout<<"\n";
    }
    return 0;
}