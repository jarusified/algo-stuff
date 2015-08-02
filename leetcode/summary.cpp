#include<iostream>
#include<vector>

using namespace std;

vector<string> summaryRanges(vector<int>& nums){
	vector<string> ans;
	int start=nums[0];
	return ans;
}


int main(){
	vector<int> nums;
	int n;
	cin>>n;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		nums.push_back(temp);
	}
	summaryRanges(nums);
}
