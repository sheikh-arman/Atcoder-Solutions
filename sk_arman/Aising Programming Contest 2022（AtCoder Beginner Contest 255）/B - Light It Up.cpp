/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
    Date:
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> policy_set;

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
ll dx[]= {1,-1,0,0,1,-1,-1,1};
ll dy[]= {0,0,1,-1,1,1,-1,-1};
ll knx[]= {2,2,1,-1,-2,-2,1,-1};
ll kny[]= {1,-1,2,2,1,-1,-2,-2};
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    // cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,k;
        cin>>n>>k;
        vector<pair<ll,ll>>V;
        ll ar[n+10];
        for(int i=0; i<=n; i++)
        {
            ar[i]=0;
        }
        for(ll i=1; i<=k; i++)
        {
            ll a;
            cin>>a;
            ar[a]=1;
        }
        V.PB({0,0});
        for(ll i=0; i<n; i++)
        {
            ll a,b;
            cin>>a>>b;
            V.PB({a,b});
        }
        double ans=0;
        for(int i=1;i<=n;i++){
            if(ar[i]==0){
                double tm_ans=999999999999;
                for(int j=1;j<=n;j++){
                    if(ar[j]==1){
                        ll x=abs(V[i].first-V[j].first);
                        ll y=abs(V[i].second-V[j].second);
                        double tm=sqrt(double((x*x)+(y*y)));
                        if(tm_ans>tm){
                            tm_ans=tm;
                        }
                    }
                }
                if(ans<tm_ans){
                    ans=tm_ans;
                }
            }
        }
        cout<<fixed<<setprecision(13)<<ans<<"\n";
    }
    return 0;
}





