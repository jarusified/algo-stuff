#include<iostream>
#include<cstdio>
using namespace std;

int gcd(long long a,long long b){
	if(a==0) return b;
	return gcd(b%a,a);
}

int find(long long a,long long b){
	if(b==1) return 1;
	long long c = gcd(a,b);
	if(c==1) return 0;
	long long d = b/c;
	return find(c,d);
}
int main(){
	long long  t;
	cin>>t;
	while(t--){
		long long a,b;
		scanf("%lld%lld",&a,&b);
		if(find(a,b)) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}

