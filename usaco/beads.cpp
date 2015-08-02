/*ID: jarus301
PROG: beads
LANG: C++
*/
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	ofstream fout ("beads.out");
    	ifstream fin ("beads.in");
	int n;
	fin>>n;
	//cin>>n;
	string s;
	fin>>s;
	int ans=0;
	for(int i=0;i<n;i++){
		bool broke=false;
		int count=1;
		int state=s[i];
		while(count<n){
			if(state=='w') state=s[(i+count)%n];
			else { 
				if(s[(i+count)%n]!='w' && s[(i+count)%n] != state){
					if(broke) break;
					broke=true;
					state=s[(i+count)%n];
				}
			}
			count++;		
		}
		ans=max(ans,count);
	}
	fout<<ans<<"\n";
}	
