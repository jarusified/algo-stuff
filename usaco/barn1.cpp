/*ID: jarus301
  PROG: barn1
  LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

struct barn{
  int gap,pos;
};

int cmp(struct barn a, struct barn b) {
	return a.gap > b.gap;
}

int asc(int a,int b){
  return a<b;
}

int main(){
  ifstream fin("milk.in");
	ofstream fout("milk.out");
  int m,s,c;
  cin>>m>>s>>c;
  int i=0;
  int a[c];
  while(c--){
    cin>>a[i];
    i++;
  }
  int max=0;
  sort(a,a+c,asc);
  barn cows[200];
  for(int i=0;i<m-1;i++){
    cows[i].gap=a[i+1]-a[i];
    cows[i].pos=i;
  }
  sort(cows,cows+c,cmp);

}
