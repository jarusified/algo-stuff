#include<iostream>
#include<string>
using namespace std;

string convert(string s, int numRows) {
	if(numRows==1) return s;
	int step = numRows*2-2,len=s.length();
	string ans="";
	for(int i=0;i<len;i+=step){
		ans+=s[i];
	}
	for(int i=0;i<numRows-1;i++){
		for(int j=i;j<len;j+=step){
			ans+=s[i];
			if(j+(step-i*2)<len)
				ans+=s[j+(step-i*2)];
		}
	}
	for(int i=numRows;i<len;i+=step){
		ans+=s[i];
	}
	return ans;
}

int main(){
   cout<<convert("PAYPALISHIRING", 3);
  
}
