/*
 ID: jarus301
 PROG: namenum
 LANG: C++
 */
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

char codec[]={'2','2','2','3','3','3','4','4','4','5','5','5','6','6','6','7','0','7','7','8','8','8','9','9','9','0'};

string generate(string s){
	string a="";
	for(int i=0;i<s.length();i++){
		char val='A'+codec[i];
		cout<<val<<"\n";
		if(val==0) return 0;
		a+=val;
	}
	return a;
}
int main(){
	ofstream fout("namenum.out");
	ifstream fin("namenum.in");
	ifstream dic("dict.txt");

	string n;
	fin>>n;
	string name;
	bool istrue=false;
	cout<<generate("SURAJ");

	while(dic>>name){
		string number=generate(name);
		if(number==n){
			fout<<name<<"\n";
			istrue=true;
		}
	}
	if(!istrue) fout<<"NONE\n";
}
