#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define alpha ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define ff first
#define ss second
#define input(v,n) for(ll ppp=0; ppp<n; ppp++) cin>>v[ppp]
#define output(v,n) for(ll ppp=0; ppp<n; ppp++) cout<<v[ppp]<<" "
#define min3(a, b, c) min(a,min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a,max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define vi vector<ll>
#define vii vector<pair<ll, ll> >

const ld PI = acosl(-1.0);

ld p,q,r,s,t,u;

ld solvequation(ld x)
{
    return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}

ld findans()
{
    ld l=0,r=1.0,mid;
    while(l<r)
    {
        mid=(l+r)/2;
        ld k=solvequation(mid);
        //cout<<k<<" ";
        if(k>0)
        {
            l=mid;
        }
        else if(k<0)
        {
            r=mid;
        }
        if(abs(k)<1e-6)
            return mid;
    }
    return -1;
}

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    while(scanf("%Lf %Lf %Lf %Lf %Lf %Lf",&p,&q,&r,&s,&t,&u)==6)
    {
        ld k = findans();
        if(k==-1)
            printf("No solution\n");
        else
            printf("%0.4Lf\n",k);
    }
    return 0;
}