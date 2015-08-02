#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int dp[100001][10];
int visited[100001][10];
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		dp[0][9]=0;
		int len=n.size();
		memset(visited,0,sizeof(visited));
		for(int i=0;i<n.size();i++){
			for(int j=0;j<=9;j++){
					dp[i][(j+n[i]-'0') % 9]=min(min(dp[i][(j+n[i]-'0'-1) % 9],dp[i][(j+n[i]-'0'+1) % 9]),dp[i][j]);
			}
		}
		for(int i=0;i<len;i++){
			for(int j=0;j<=9;j++){
				cout<<dp[i][j]<<"-";
			}
			cout<<"\n";
		}
		cout<<dp[len][0]<<"\n";
	}
	return 0;
}