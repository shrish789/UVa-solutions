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

void addstrings(string str1, string str2)
{
    ll len1,len2;
    string ans="";
    len1=str1.length();
    len2=str2.length();
    if(len1<len2)
        swap(str1,str2),swap(len1,len2);
    ll carry=0,num;
    for(ll i=0; i<len2; i++){
        num=(str1[i]-'0')+(str2[i]-'0');
        num+=carry;
        carry=num/10;
        num%=10;
        ans+=(num+'0');
    }
    for(ll i=len2; i<len1; i++){
        num=str1[i]-'0';
        num+=carry;
        carry=num/10;
        num%=10;
        ans+=(num+'0');
    }
    ll t=0;
    if(carry)
        ans+=(carry+'0');
    for(ll i=0; i<ans.length(); i++){
        if(ans[i]=='0' && t==0)
            continue;
        else{
            cout<<ans[i];
            t=1;
        }
    }
}

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t;
    string str1,str2,ans;
    cin>>t;
    while(t--)
    {
        cin>>str1>>str2;
        addstrings(str1,str2);
        cout<<"\n";
    }
    return 0;
}