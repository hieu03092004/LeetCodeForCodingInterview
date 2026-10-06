#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	vector<int> twoSum(vector<int>& nums, int target) {
     	for(int i=0;i<nums.size()-1;i++){
     		for(int j=i+1;j<nums.size();j++){
     			if(nums[j]==target-nums[i])
     				return {i,j};
     		}
     	}
     	return {};   
    }
};
int main(){
	freopen("input.txt","r",stdin);
   	freopen("output.txt","w",stdout);
   	Solution solution;
   	vector<int>nums={3,3};
   	vector<int>ans=solution.twoSum(nums,6);
   	cout<<"["<<ans[0]<<","<<ans[1]<<"]";

}
