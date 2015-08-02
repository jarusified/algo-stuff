/*ID: jarus301
  PROG: milk
  LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

struct milk{
  int price;
  int amount;
};

bool operator<(const milk &a, const milk &b) {
	return a.price > b.price;
}

int main(){
  ifstream fin("milk.in");
	ofstream fout("milk.out");
  int n,m;
  fin>>n>>m;
  priority_queue<milk> q;
  for(int i=0;i<m;i++){
    int price,amount;
    fin>>price>>amount;
    milk a={price,amount};
    q.push(a);
  }
  int tot=0;
  while(n>0 && !q .empty()){
    milk top = q.top();
    if(top.amount<n){
        n-=top.amount;
        tot+=top.price*top.amount;
    }
    else{
        tot+=top.price*n;
        break;
    }
    q.pop();
  }
  fout<<tot<<"\n";
  return 0;
}
