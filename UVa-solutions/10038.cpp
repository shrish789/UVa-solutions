    //Jolly Jumpers
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
     
        stringstream ss;
        string str;
        ll n;
        while(getline(cin,str))
        {
        	if(str.empty()) break;
     
        	ss.clear();
        	ss<<str;
        	ss>>n;
        	ll a[n],i,t=0;
        	ss>>a[0];
        	vector <ll> v;
        	for(i=1; i<n; i++)
        		ss>>a[i],v.pb(abs(a[i]-a[i-1]));
        	if(v.empty())
        	{
        		cout<<"Jolly\n";
        		continue;
        	}
        	sort(v.begin(),v.end());
        	for(i=0; i<v.size(); i++)
        	{
        		if(v[i]!=i+1)
        		{
        			t=1;
        			break;
        		}
        	}
        	if(t)
        		cout<<"Not jolly\n";
        	else
        		cout<<"Jolly\n";
        }
        return 0;
    }