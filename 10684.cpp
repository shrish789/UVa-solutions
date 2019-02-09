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
#define PI 3.141592653

typedef long long ll;


ll maxSubArraySum(ll a[], ll size) 
{ 
   ll msf = 0, meh = 0; 
   for (ll i = 0; i < size; i++) 
   { 
       	meh = meh + a[i]; 
        if (meh < 0) 
        	meh = 0; 
        else if (msf < meh)
           msf = meh; 
   } 
   return msf;
} 


int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll n;
    while(cin>>n && n!=0)
    {
    	ll a[n];
    	input(a, n);
    	ll mx=maxSubArraySum(a, n);
    	if(mx<=0)
    		cout<<"Losing streak.";
    	else
    		cout<<"The maximum winning streak is "<<mx<<".";
    	cout<<"\n";
    }
    return 0;
}