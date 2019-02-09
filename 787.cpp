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

string comparemax(string s1, string s2)
{
	if(s1[0]!='-' && s2[0]!='-')
	{
		if(s1.length()>s2.length())
			return s1;
		else if(s1.length()<s2.length())
			return s2;
		else
			return max(s1,s2);
	}
	else
	{
		if(s1.length()>s2.length())
			return s2;
		else if(s1.length()<s2.length())
			return s1;
		else
			return min(s1,s2);
	}
}

string comparemin(string s1, string s2)
{
	if(s1[0]!='-' && s2[0]!='-')
	{
		if(s1.length()>s2.length())
			return s2;
		else if(s1.length()<s2.length())
			return s1;
		else
			return min(s1,s2);
	}
	else
	{
		if(s1.length()>s2.length())
			return s1;
		else if(s1.length()<s2.length())
			return s2;
		else
			return max(s1,s2);
	}
}


string multiply(string num1, string num2, ll t) 
{ 
	if(num1[0]=='-')
	num1=num1.substr(1);
	if(num2[0]=='-')
	num2=num2.substr(1);
    ll n1 = num1.size(); 
    ll n2 = num2.size(); 
    if (n1 == 0 || n2 == 0) 
    return "0"; 
   
    vector<ll> result(n1 + n2, 0); 
   
    ll i_n1 = 0;  
    ll i_n2 = 0;  
       
    for (ll i=n1-1; i>=0; i--) 
    { 
        ll carry = 0; 
        ll n1 = num1[i] - '0'; 
   
        i_n2 = 0;  
           
        for (ll j=n2-1; j>=0; j--) 
        { 
            ll n2 = num2[j] - '0'; 
   
            ll sum = n1*n2 + result[i_n1 + i_n2] + carry; 
   
            carry = sum/10; 
   
            result[i_n1 + i_n2] = sum % 10; 
   
            i_n2++; 
        } 
   
        if (carry > 0) 
            result[i_n1 + i_n2] += carry; 
   
        i_n1++; 
    } 
   
    ll i = result.size() - 1; 
    while (i>=0 && result[i] == 0) 
    i--; 
   
    if (i == -1) 
    return "0"; 
   
    string s = ""; 
       if(t==0)
       	s+="-";
    while (i >= 0) 
        s += to_string(result[i--]); 
   //cout<<s<<"\n";
    return s; 
} 

int main()
{
    alpha

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    stringstream ss;
    string str;
    while(getline(cin,str))
    {
    	vector <string> v;
    	string x;
    	ss.clear();
    	ss<<str;
    	while(ss>>x && x!="-999999")
    		v.pb(x);
    	
    	string mx=v[0],mn=v[0],mxp=v[0];

    	for(ll i=1; i<v.size(); i++)
    	{
    		if(v[i][0]=='-')
    			swap(mx,mn);
    		ll t1=0,t2=0;
    		if(mx[0]=='-' && v[i][0]=='-' || mx[0]!='-' && v[i][0]!='-')
    			t1=1;
    		if(mn[0]=='-' && v[i][0]=='-' || mn[0]!='-' && v[i][0]!='-')
    			t2=1;
    		string s1=multiply(mx,v[i],t1);
    		if(s1[0]=='-' && v[i][0]!='-')
    			mx=v[i];
    		else if(s1[0]!='-' && v[i][0]=='-')
    			mx=s1;
    		else mx=comparemax(v[i],s1);
//cout<<mx<<" ";
    		string s2=multiply(mn,v[i],t2);
    		if(s2[0]=='-' && v[i][0]!='-')
    			mn=s2;
    		else if(s2[0]!='-' && v[i][0]=='-')
    			mn=v[i];
    		else mn=comparemin(v[i],s2);

    		if(mxp[0]=='-' && mx[0]!='-')
    			mxp=mx;
    		else if(mxp[0]!='-' && mx[0]=='-')
    			mxp=mxp;
    		else mxp=comparemax(mxp,mx);
    		//cout<<mx<<" "<<mxp<<" ";
    	}

    	cout<<mxp<<"\n";
    	
    	//output(v, v.size());
    }
    return 0;
}