/*
 ID: jarus301
 PROG: palsquare
 LANG: C++
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

bool ispalin(string s){
	string rev="";
	for(int i=s.size()-1;i>=0;i--){
		rev+=s[i];
	}	
	if(rev==s) return true;
	else return false;
}
int main(){
	ofstream fout("palsquare.out");
	ifstream fin("palsquare.in");
	int base;
	fin>>base;
	for(int i=1;i<=300;i++){
		int number=i*i;
		string	baseNumber=changeBase(number,base);
		if(ispalin(baseNumber)){
			fout<<changeBase(i,base)<<" "<<baseNumber<<"\n";
		}
	}
	return 0;

}
