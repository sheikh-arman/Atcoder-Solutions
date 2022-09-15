/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm :
 */
#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define PR pair<ll,ll>
#define sf1(n) scanf("%lld", &n)
#define sf2(n, m) scanf("%lld %lld",&n,&m)
#define sf3(n, m,k ) scanf("%lld %lld %lld",&n,&m,&k)
#define pfn(n) printf("%d\n",n)s
#define pf1(n) printf("%d ",n)
#define pfl1(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define YES printf("YES\n")
#define NO printf("NO\n")
#define minus1 printf("-1\n")
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
vector<ll>V,V2,V3;
ll ar[300000];
int main()
{
    ll tcase=1;
    for(ll test=1; test<=tcase; test++)
    {
        memset(ar,0,sizeof(ar));
        V.clear();
        ll n;
        sf1(n);
        for(ll i=0;i<n;i++){
            ll a;
            sf1(a);
            ar[a]++;
            V.PB(a);
        }
        ll ans=0;
        for(ll i=0;i<=200000;i++){
            if(ar[i]){
                ll tm=ar[i];
                tm=(tm*(tm-1))/2;
                ans+=tm;
            }
        }
        for(ll i=0;i<n;i++){
            ll tm=ans;
            ll x=ar[V[i]];
            tm-=(x*(x-1))/2;
            x--;
            tm+=(x*(x-1))/2;
            printf("%lld\n",tm);
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}
