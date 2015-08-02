/*
 ID: jarus301
 LANG: C++
 TASK: dualpal
 */

#include<iostream>
#include<fstream>

using namespace std;

string a="0123456789ABCDEFGHIJ";

string changeBase(int num,int base){
	string ans="";
	while(num){
		ans+=a[num%base];
		num/=base;
	}
	return ans;
}

string reverse(string s){
	string rev="";
	for(int i=s.size()-1;i>=0;i--){
		rev+=s[i];
	}
	return rev;
}

int main(){
	ofstream fout("dualpal.out");
	ifstream fin("dualpal.in");
	int n,s;
	fin>>n>>s;
	int h=0;
	for(int i=s+1;h<n;i++){
		int count=0;
		for(int j=2;j<=10;j++){
		string number=changeBase(i,j);
			if(number==reverse(number)){
				count++;
			}
			if(count>=2) {
				fout<<i<<"\n";
				h++;
				break;
			}
		}
	}
}
