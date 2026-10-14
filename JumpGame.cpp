#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0;

        while (i < nums.size()) {
            int j = -1;
            int ans = -1;

            if (i + nums[i] >= nums.size() - 1)
                return true;

            for (int k = i + 1; k <= i + nums[i] && k < nums.size(); k++) {
                if (k + nums[k] > ans) {
                    j = k;
                    ans = k + nums[k];
                }
            }

            if (j == -1)
                return false;

            i = j;
        }
        return false;
    }
};
int main(){
	freopen("input.txt","r",stdin);
   	freopen("output.txt","w",stdout);
   	Solution solution;
   	vector<int>nums={1,0,2};
   	cout<<solution.canJump(nums);
}