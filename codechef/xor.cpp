#include<iostream>

using namespace std;

int main(){
  int t, n, tmp;
  cin>>t;
  while(t--){
    int num_zeroes = 0, num_ones = 0;
    int ans = 0;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>tmp;
      if(tmp) num_ones++;
      else num_zeroes++;
    }
    if(num_ones%2){
      ans += num_ones;
    }else{
      ans = 0;
    }
    cout<<ans<<endl;
  }
  return 0;
}
