#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		int chef=0;
		int opponent=0;
		bool draw=false;
		for(int i=0;i<s.size();i++){
			if(s[i]=='0'){
				opponent++;
			}
			else if(s[i]=='1'){
				chef++;
			}
			if(chef>=11 && draw==false){
				cout<<"WIN\n";
				break;
			}
			else if(opponent>=11 && draw==false){
				cout<<"LOSE\n";
				break;
			}
			if(chef==10 && opponent==10){
				draw=true;
			}
			if(draw){
				if(opponent-chef==2){
					cout<<"LOSE\n";
					break;
				}
				else if(chef-opponent==2){
					cout<<"WIN\n";
					break;
				}
			}
		}
	}
	return 0;
}