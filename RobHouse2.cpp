#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int robRange(int l,int r,vector<int>nums){
		vector<int>F(nums.size(),0);
		int ans=0;
		for(int i=l;i<=r;i++){
			F[i]=nums[i];
			for(int j=l;j<i-1;j++)
				F[i]=max(F[i],F[j]+nums[i]);
			ans=max(ans,F[i]);
		}
		return ans;
	}
    int rob(vector<int>& nums) {
    	if(nums.size()<2)
    		return nums[0];
    	else
    		return max(robRange(0,nums.size()-2,nums),robRange(1,nums.size()-1,nums));
    	
    }
};
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	Solution solution;
	vector<int>nums={1,2,3,1};
	cout<<solution.rob(nums);
}