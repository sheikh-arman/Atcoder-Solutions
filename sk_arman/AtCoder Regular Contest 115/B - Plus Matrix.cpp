#include<bits/stdc++.h>
using namespace std;
#define PB push_back
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll ar[505][505];
int main()
{
    //freopen("1input.txt","r",stdin);
    //fast;
    ll tcase=1;
    // cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,ck=1;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                cin>>ar[i][j];
            }
        }

        for(ll j=0; j<n-1; j++)
        {
            set<ll>st;
            for(ll i=0; i<n; i++)
            {
                st.insert(abs(ar[i][j]-ar[i][j+1]));
            }
            if((ll)st.size()>1)
            {
                ck=0;
            }
        }
        if(ck==0)
        {
            cout<<"No\n";
        }
        else
        {
            vector<ll>V_a,V_b;
            ll row=0,ma=LONG_MAX;
            for(ll i=0; i<n; i++)
            {
                for(ll j=0; j<n; j++)
                {
                    if(ma>ar[i][j])
                    {
                        row=i;
                        ma=ar[i][j];
                    }
                }

            }
            for(ll i=0; i<n; i++)
            {
                V_b.PB(ar[row][i]);
            }
            for(ll i=0; i<n; i++)
            {
                V_a.PB(abs(ar[i][0]-V_b[0]));
            }
            for(ll i=0; i<n; i++)
            {
                for(ll j=0; j<n; j++)
                {
                    if(V_a[i]+V_b[j]!=ar[i][j])
                    {
                        ck=0;
                        break;
                    }
                }
            }
            if(ck==0)
            {
                cout<<"No\n";
            }
            else
            {
                cout<<"Yes\n";
                for(ll i=0; i<n; i++)
                {
                    cout<<V_a[i];
                    if(i<n-1)
                    {
                        cout<<" ";
                    }
                }
                cout<<"\n";
                for(ll i=0; i<n; i++)
                {
                    cout<<V_b[i];
                    if(i<n-1)
                    {
                        cout<<" ";
                    }
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}


