#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(){
	char n;
	cin>>n;
	while(n--){
		string num;
		cin>>num;
		int sum=0,rem;
		for(int i=0;i<num.size();i++){
			sum+=num[i]-'0';
		}
		rem=sum%9;
		cout<<rem;
	}
	return 0;
}