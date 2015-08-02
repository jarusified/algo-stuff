#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int temp=0;
		for(int i=0;i<n;i++){
			if(a[i]%2==0){
				temp++;
			}
		}
		if(temp>=k) cout<<"YES\n";
		else if(temp==n && k==0) cout<<"NO\n";
		else cout<<"NO\n";
	}
}
