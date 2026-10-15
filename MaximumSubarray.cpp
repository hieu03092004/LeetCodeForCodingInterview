#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	static int F[100][100];
	int maxSubArray(vector<int>& nums) {
		int max_sum=nums[0],sum=nums[0];
		for(int i=1;i<nums.size();i++){
			if(sum<0)
				sum=nums[i];
			else
				sum+=nums[i];
			max_sum=max(max_sum,sum);
		}
		return max_sum;
    }
};
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	Solution solution;
	vector<int>nums={-1};
	cout<<solution.maxSubArray(nums);
}
