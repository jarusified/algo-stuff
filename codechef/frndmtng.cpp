#include <iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int T1,T2,t1,t2;
		cin>>T1>>T2>>t1>>t2;
		 if(t1==0 && t2==0){
		 	cout<<1/(T1*T2)<<"\n";
		 }
	}
}