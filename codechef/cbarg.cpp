#include <iostream>

using namespace std;
typedef long long ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++) cin>>a[i];

		ll mem=a[0];
		ll tot=a[0];
		for(ll i=1;i<n;i++){
			if(mem-a[i]>=0){
				mem=a[i];
			}
			else if(mem-a[i]<0){
				tot+=a[i]-mem;
				mem=a[i];
			}
		}
		cout<<tot<<endl;
	}
}