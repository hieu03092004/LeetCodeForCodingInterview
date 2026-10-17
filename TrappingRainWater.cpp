#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
       	int ans=0;
       	vector<int>leftMax(height.size(),0);
       	vector<int>rightMax(height.size(),0);
       	leftMax[0]=height[0];
       	for(int i=1;i<height.size();i++)
    		leftMax[i]=max(leftMax[i-1],height[i]);

    	rightMax[height.size()-1]=height[height.size()-1];
    	for(int i=height.size()-2;i>=0;i--)
    		rightMax[i]=max(rightMax[i+1],height[i]);
    	for(int i=1;i<height.size()-1;i++){
    		if(min(leftMax[i-1],rightMax[i+1])>=height[i] )
    			ans+=min(leftMax[i-1],rightMax[i+1])-height[i];
    	}
       	return ans;
    }
};
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	Solution solution;
	vector<int>height={0,1,0,2,1,0,1,3,2,1,2,1};
	cout<<solution.trap(height);
}