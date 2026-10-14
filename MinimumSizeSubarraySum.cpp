#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int F[nums.size()+1];
		F[0]=0;
		for(int i=0;i<nums.size();i++)
			F[i+1]=F[i]+nums[i];
		int ans=1e5+1;
		for(int i=1;i<=nums.size();i++){
			int r=lower_bound(F+i,F+nums.size()+1,F[i-1]+target)-F;
			if(r<=nums.size() && ans>r-i+1){
				ans=r-i+1;
				
			}
		}
		if(ans!=1e5+1)
			return ans;
		return 0;
    }
};
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	Solution solution;
	vector<int>nums={1,1,1,1,7};
	int target=7;
	cout<<solution.minSubArrayLen(target,nums);
}