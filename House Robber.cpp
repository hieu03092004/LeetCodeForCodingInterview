#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
    	if(nums.size()>=2){
    		int F[100];
    		for(int i=0;i<100;i++)
    				F[i]=0;
	    	int ans=max(nums[0],nums[1]);
	    	F[0]=nums[0],F[1]=nums[1];
	        for(int i=2;i<nums.size();i++){
	        	for(int j=0;j<i-1;j++){
        			F[i]=max(F[i],F[j]+nums[i]);
        			ans=max(ans,F[i]);
	        	}
	        }     
	        return ans;
    	}
    	return nums[0];
    	
    }
};
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	Solution solution;
	vector<int>nums={1,2,3};
	cout<<solution.rob(nums);
}