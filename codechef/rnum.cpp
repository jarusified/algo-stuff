#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int t, n, tmp;
  cin>>t;
  while(t--){
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
      cin>>tmp;
      a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    a.push_back(0);
    a.push_back(0);
    a.push_back(0);
    int num_triplets = 0, num_doublets = 0, num_singlets = 0;
    for(int i=0;i<n;i++){
      if(a[i]+1 == a[i+1] && a[i+1] == a[i+2]-1){
        i += 2;
        num_triplets++;
      }else if(a[i]+1 == a[i+1]){
        i += 1;
        num_doublets++;
      }else{
        num_singlets++;
      }
    }
    int mini = num_triplets + num_doublets + num_singlets;
    int maxi = 0;
    for(int i=n-1; i>=0;i--){
      if(i-1 >= 0 && a[i] == a[i-1]+1) {
        maxi++;
        i--;
      }else{
        maxi++;
      }
    }
    cout<<mini<<" "<<maxi<<endl;
  }
  return 0;
}
