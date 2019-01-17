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
    //alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    double hours,minutes;
    vector <double> v;
    cout<<fixed<<setprecision(3);
    while(scanf("%lf:%lf",&hours,&minutes))
    {
        if(hours==0.0 && minutes==0.0)
            break;
        double angmins,anghrs;
        angmins=minutes*6;
        anghrs=hours*5*6+(minutes/12)*6;
        double ans=fmod(abs(anghrs-angmins),360.0);
        if(ans>180.0)
            ans=360.0-ans;
        v.pb(ans);
    }
    for(ll i=0; i<v.size(); i++)
        cout<<v[i]<<"\n";
    return 0;
}