#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll s[100001];
ll n;

int bsearch(ll target){
	ll lo=1;
	ll hi=n;
	cout<<lo;
	/*while(lo<=hi){
		ll mid=lo + (hi-lo)/2;
		if(s[mid]<target && s[mid]>s[mid+1]){
			return n-mid;
		}
		if(s[mid]>target){
			hi=mid;
		}
		else{
			lo=mid;
		}
	}*/
}
int main(){
	cin>>n;
	for(ll i=0;i<n;i++) cin>>s[i];
	ll q;
	cin>>q;
	ll x,lo=0,hi=n-1;
	sort(s,s+n);
	cout<<n;
	for(ll i=0;i<q;i++){
		ll count=0;
		cin>>x;
		while(lo<=hi){
			ll mid=lo + (hi-lo)/2;
			if(s[mid]<x && s[mid]>s[mid+1]){
				cout<<n-mid;
			}
			else if(s[mid]>x	){
				hi=mid+1;
			}
			else{
				lo=mid-1;
			}
		}
//		cout<<count<<"\n";
	}
}
