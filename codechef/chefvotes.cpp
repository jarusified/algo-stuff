#include <iostream>
#include <vector>
using namespace std;

int main(){
  int test,n;
  cin>>test;
  for(int a=0;a<test;a++){
    vector<int> c, ans;
    cin>>n;
    int sum = 0, k, test = 0;
    for(int i=0;i<n;i++){
      cin>>k;
      sum +=k;
      if(k>=n) test = 1;
      c.push_back(k);
      ans.push_back(0);
    }

    if(sum > n || test == 1) { cout<<-1<<endl; continue;}

    for(int i=c.size()-1;i>=0;i--){
      int j=0;
      while(c[i]){
          if(ans[j] == 0){
            ans[j] = i+1;
            c[i]--;
          }
          j++;
      }
    }

    for(int i=0;i<ans.size();i++){
      if(ans[i] == i+1){
        for(int j=ans.size()-1;j>=0;j--){
          if(ans[i] != ans[j]){
            int pq = ans[i];
            ans[i] = ans[j];
            ans[j] = pq;
            break;
          }
        }
      }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
