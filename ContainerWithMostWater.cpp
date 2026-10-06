#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int maxArea(vector<int>&height){
        int left=0;
        int right=height.size()-1;
        int ans=0;
        while(left<right){
            int width=right-left;
            ans=max(ans,min(height[left],height[right])*width);
            if(height[left]<height[right])
                left++;
            else
                right--;
        }
        return ans;
    }
};
int main() {
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   Solution solution;
   vector<int>height={8,7,2,1};
   cout<<solution.maxArea(height);

}