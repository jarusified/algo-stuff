/*ID: jarus301
  PROG: crypt1
  LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

bool d[10]={false};

bool istrue(int num,int len){
  int l = 0;
  	while(num > 0) {
  		if(!d[num % 10]) return false;
  		num /= 10;
  		l++;
  	}
  	return l > 0 && l <= len;
}
int main(){
  ifstream fin("crypt1.in");
	ofstream fout("crypt1.out");
  int n;
  fin>>n;
  for(int i=0;i<n;i++){
    int temp;
    fin>>temp;
    d[temp]=true;
  }
  int count=0;
  for(int i=1;i<n;i++)
    for(int j=0;j<n;j++)
      for(int k=0;k<n;k++)
        for(int l=1;l<n;l++)
          for(int m=0;m<n;m++){
            int three=100*i+10*j+k;
            int two  =10*l+m;
            if(istrue(three,3) && istrue(two,2) && istrue(l*three,3) && istrue(m*three,3) && istrue(three*two,4))
              count++;
          }
  fout<<count<<"\n";


}
