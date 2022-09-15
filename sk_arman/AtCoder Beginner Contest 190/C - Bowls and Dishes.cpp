/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
 */
#include<bits/stdc++.h>
#define nl cout<<"\n";
#define N 200001
#define PR pair<ll,ll>
#define sf1(n) cin>>n
#define sf2(n, m) cin>>n>>m
#define sf3(n, m,k ) cin>>n>>m>>k
#define pfn(n) printf("%d\n",n)s
#define pf1(n) printf("%d ",n)
#define pfl1(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define minus1 printf("-1\n");
#define PB push_back
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define VSTcmp(v,cmp) sort(v.begin(),v.end(),cmp)
#define fori(i,n) for(;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define MP make_pair
#define ff first
#define ss second
#define tt third
#define mod 1000000007
#define T(n) printf("test %d\n",n)
int dx[] = {0,0,1,-1,2,2,-2,-2,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1,2,2,-2,-2};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<PR>K;
vector<ll>V1,V2;
ll k,n,m;
ll dp(ll i,bitset<102>ck){
    if(i>=k){
        ll cnt=0;
        for(ll x=0;x<m;x++){
            if(ck[V1[x]]&&ck[V2[x]]){
                cnt++;
            }
        }
        return cnt;
    }
    ll t1=K[i].ff;
    ll t2=K[i].ss;
    bool rakci=ck[t1];
    ck[t1]=1;
    ll ans=dp(i+1,ck);
    ck[t1]=rakci;
    ck[t2]=1;
    ans=max(ans,dp(i+1,ck));
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//    freopen("1input.txt","r",stdin);
//    freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        cin>>n>>m;
        for(ll i=0;i<m;i++){
            ll a,b;
            cin>>a>>b;
            V1.PB(a);
            V2.PB(b);
        }
        cin>>k;
        for(ll i=0;i<k;i++){
            ll a,b;
            cin>>a>>b;
            K.PB({a,b});
        }
        bitset<102>cc;
        cc.reset();
        //cout<<cc[0]<<"x\n";
        ll ans=dp(0,cc);
        cout<<ans<<"\n";
    }
///*****************************  ALHAMDULILLAH  *****************************/
}



