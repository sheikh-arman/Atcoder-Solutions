#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sf(n) scanf("%lld",&n);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define nl cout<<"\n";
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
#define T(n) printf("test : %d\n",n);
map<string,ll>mp;
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
   // cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,m;
        cin>>n>>m;
        vector<string>V;
        for(ll i=0;i<n;i++){
            string s;
            cin>>s;
            V.PB(s);
        }
        for(ll i=0;i<m;i++){
            string s;
            cin>>s;
            mp[s]=1;
        }
        for(ll i=0;i<n;i++){
            if(mp[V[i]]==1){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }

       // cout<<"Case "<<test<<": "<<V[n]<<"\n";
    }
    return 0;
}

