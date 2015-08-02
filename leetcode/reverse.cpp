#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

int reverse(int num){
	bool neg =false;
	if(num<0){
		num=0-num;
		neg=true;
	}
	int ans=0;
	int p=num;
	while(p>0){
		int mod=p%10;
		p/=10;
		ans=ans*10+mod;
	}
	if(neg)
		ans=0-ans;
	if(ans>1000000000 && ans<-1000000000) return 0;
	else return (int)ans;
}	

int main(){
	int c;
	cin>>c;
	cout<<reverse(c);
}
