#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int adj[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>adj[i][j];
		}	
	}
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
			}
		}
	}
	int m;
	cin>>m;
	while(m--){
		int s,d,g;
		cin>>s>>d>>g;
		cout<<adj[s][g]+adj[g][d]<<adj[s][g]+adj[g][d]-adj[s][d];
	}
}
