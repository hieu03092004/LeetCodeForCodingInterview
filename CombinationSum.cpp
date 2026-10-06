#include <bits/stdc++.h>
using namespace std;
class Solution{
private:
	vector<vector<int>>ans;
	void backTrack(vector<int>& candidates, int target,int index,vector<int>tmp) {
        for(int i=index;i<candidates.size();i++){
        	if(candidates[i]>target)
        		continue;
        	tmp.push_back(candidates[i]);
        	if(candidates[i]==target)
        		ans.push_back(tmp);
        		//ket qua
        	else
        		//a[i]<target
        		backTrack(candidates,target-candidates[i],i,tmp);
        	tmp.pop_back();

        }
    }
public:
	 vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>tmp;
        backTrack(candidates,target,0,tmp);
        return ans;
    }
	
};
int main(){
	freopen("input.txt","r",stdin);
   	freopen("output.txt","w",stdout);
   	Solution solution;
   	vector<int>candidates={2,3,5};
   	int target=8;
   	vector<vector<int>>result=solution.combinationSum(candidates,target);
   	for(int i=0;i<result.size();i++){
   		for(int j=0;j<result[i].size();j++){
   			cout<<result[i][j];
   			if(j!=result[i].size()-1)
   				cout<<" ";
   		}
   		if(i!=result.size()-1)
   			cout<<"\n";
   	}
   	
}