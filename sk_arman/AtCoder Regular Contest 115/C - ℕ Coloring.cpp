#include<bits/stdc++.h>
using namespace std;
#define PB push_back
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll ar[200010];
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,cnt=2;
        cin>>n;
        for(ll i=1; i<=n; i++)ar[i]=2;
        ar[1]=1;
        for(ll i=2; i<=n; i++)
        {

            for(ll j=i+i; j<=n; j+=i)
            {
            	if(ar[j]==ar[i])
					ar[j]=ar[i]+1;
            }
        }
//        for(ll i=1;i<=10;i++){
//			cout<<i<<" ";
//        }
//        cout<<"\n";
        for(ll i=1; i<=n; i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}


