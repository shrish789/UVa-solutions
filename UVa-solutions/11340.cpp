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

    int t, k, m, l;
    map <char, double> mymap;
    map <char, double>::iterator it;
    char c;
    string line;
    double v, sum;

    scanf("%d", &t);
    while(t--)
    {
        sum = 0;
        scanf("%d", &k);
        for(int i = 0; i < k; i++){
            cin >> c >> v;
            mymap[c] = v;
        }
        scanf("%d", &m);
        cin.ignore();
        for(int i = 0; i < m; i++){
            line = "";
            getline(cin, line);
            l = line.size();
            for(int j = 0; j < l; j++){
                it = mymap.find(line[j]);
                if(it != mymap.end())
                    sum += it->second;
            }           
        }
        sum /= 100;
        printf("%0.2lf$\n", sum);
        mymap.clear();
    }
    return 0;
}