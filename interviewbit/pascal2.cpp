#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

void getRow(int k){
	int arr[k][k];
    memset(arr, 0, sizeof(arr[0][0])*k*k);
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if(i==j || i==0){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
    }
    vector<int> ans;
    for(int i=0;i<=k;i++){
        cout<<arr[k-1][i];
        //ans.push_back(arr[k-1][i]);
    }
    //return ans;
}

int main(){
	getRow(2);
}
