#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n,m;
	int count=0;
	while(1){
		cin>>n>>m;
		count++;
		char a[n][m];
		if(n==0 && m==0) return 0;
		int  b[150][150]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]=='*'){
					b[i][j+1]++;
					b[i+1][j+1]++;
					b[i+1][j]++;
					b[i+1][j-1]++;	
					b[i-1][j+1]++;
					b[i][j-1]++;
					b[i-1][j]++;
					b[i-1][j-1]++;
				}
			}
		}	
		cout<<"Field #"<<count<<"\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]=='*') cout<<a[i][j];
				else cout<<b[i][j];
			}
			cout<<"\n";
		}
		cout<<"\n";
		
	}
	return 0;
}	
