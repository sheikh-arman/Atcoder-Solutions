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
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;

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

ll row[5],col[5];
ll ar[5][5];
ll valid(){
	for(ll i=0;i<2;i++){
		for(ll j=0;j<2;j++){
			if(ar[i][j]==0){
				return 0;
			}
		}
	}
	ar[0][2]=row[0]-(ar[0][0]+ar[0][1]);
	ar[1][2]=row[1]-(ar[1][0]+ar[1][1]);
	
	ar[2][0]=col[0]-(ar[0][0]+ar[1][0]);
	ar[2][1]=col[1]-(ar[0][1]+ar[1][1]);
	ar[2][2]=col[2]-(ar[0][2]+ar[1][2]);
	
	for(ll i=0;i<3;i++){
		ll sum=0;
		for(ll j=0;j<3;j++){
			if(ar[i][j]<=0){
				return 0;
			}
			sum+=ar[i][j];
		}
		if(sum!=row[i]){
			return 0;
		}
	}
	
	for(ll i=0;i<3;i++){
		ll sum=0;
		for(ll j=0;j<3;j++){
			if(ar[j][i]<=0){
				return 0;
			}
			sum+=ar[j][i];
		}
		if(sum!=col[i]){
			return 0;
		}
	}
	
	return 1;
}
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        for(ll i=0;i<3;i++){
        	cin>>row[i];
        }
        for(ll i=0;i<3;i++){
        	cin>>col[i];
        }
        for(ll i=0;i<=3;i++){
        	for(ll j=0;j<=3;j++){
        		ar[i][j]=0;
        	}
        }
        for(ll i=0;i<3;i++){
        	for(ll j=0;j<3;j++){
        		ar[i][j]=0;
        	}
        }
        ll ans=0;

      for(ll i=1;i<=30;i++){
        ar[0][0]=i;
        for(ll j=1;j<=30;j++){
        	ar[0][1]=j;
        	for(ll k=1;k<=30;k++){
        		ar[1][0]=k;
        		for(ll l=1;l<=30;l++){
        			ar[1][1]=l;
        			ans+=valid();
        		}
        	}
        }
     }
    cout<<ans<<"\n";



    }
    return 0;
}




