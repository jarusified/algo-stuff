#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
 
    ll t;
    ll n,i,v,x,y;
    vector<pair<ll,ll> > a;
    ll j,temp;
    ll min, index;
    cin>>t;
    while(t--)
    {   
        ll area,m;
        cin>>n;
        for(i=0;i<n;i++){
            area=0;
            scanf("%lld",&m);
            ll x[m],y[m];
            scanf("%lld",&x[0]);
            scanf("%lld",&y[0]);
            for(j=1;j<m;j++){
                scanf("%lld",&x[j]);
                scanf("%lld",&y[j]);
                area+=(x[j-1]*y[j]-x[j]*y[j-1]);
            }
            area+=(x[m-1]*y[0]-x[0]*y[m-1]);
            area=abs(area);
            a.push_back(make_pair(area,i));
        }
       
        sort(a.begin(),a.end());
        ll ans[n];
        for(int i=0;i<a.size();i++){
                ans[a[i].second]=i;
        }
        for(int i=0;i<a.size();i++){
                cout<<ans[i]<<" ";
        }
        cout<<endl;
 
    }
}


