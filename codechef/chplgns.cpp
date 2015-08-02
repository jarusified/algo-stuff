#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector <pair<ll,ll> > areas;
		int count=0;
		while(n--){
			ll m;
			cin>>m;
			ll area=0;
			ll x[m],y[m];
			for(ll i=0;i<m;i++){
				cin>>x[i]>>y[i];
			}
			ll k,l=m-1;
			for(k=0;k<m;k++){
				area+=(x[l]+x[k])*(y[l]-y[k]);
				l=k;
			}
			areas.push_back(make_pair(abs(area/2),count));
			count++;

		}
		sort(areas.begin(),areas.end());
		ll ans[n];
		for(int i=0;i<areas.size();i++){
			cout<<areas[i].first<<" "<<areas[i].second<<"\n";
			ans[areas[i].second]=i;
		} 
		for(int i=0;i<areas.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<"\n";
		return 0;	
		
	}
}