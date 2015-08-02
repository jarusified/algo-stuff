#include<iostream>
#include<limits.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int sum=0;
		int minf=LONG_MAX;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			sum+=a[i];
			minf=min(minf,a[i]);
		}
		if(minf<2) cout<<-1<<"\n";
		else if(minf>2) cout<<sum-minf+2<<"\n";
	}
	return 0;
}
