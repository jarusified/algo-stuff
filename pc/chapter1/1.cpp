#include<iostream>

using namespace std;

int cycle(int v){
	if(v==1) return 1;
	int count=1;
	while(1){
		if(v%2==0) v/=2;
		else v=v*3+1;
		count++;
		if(v==1) break;	
	}
	return count;
}
int main(){
	int i,j;
	while(cin>>i>>j){
		if(i>j){ int temp=i; j=i; i=temp; }
		int max=0;
		for(int k=i;k<=j;k++){
			int val=cycle(k);
			if(val>max) max=val;
		}
		cout<<i<<" "<<j<<" "<<max<<"\n";
		
	}	
	return 0;

}
