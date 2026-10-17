#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canCross(vector<int>& stones) {
        map<long long,int>mp;
        vector<set<long long>>F(stones.size());
        for(int i=0;i<stones.size();i++)
        	mp[stones[i]]=i;
        if(stones[1]<=1)
        	F[1].insert(1);
       	for(int i=1;i<stones.size();i++){
       		if(F[i].size()>0){
       			for(long long x:F[i]){
       				long long l;
       				if(x-1>1)
       					l=x-1;
       				else
       					l=1;
	       			for(long long k=l;k<=x+1;k++){
	       				if(mp.count(stones[i]+k))
	       					F[mp[stones[i]+k]].insert(k);
	       			}
       			}
       		}
       	}
       	return !F[stones.size()-1].empty();
    }
};
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	Solution solution;
	vector<int>stones={0,2};
	cout<<solution.canCross(stones);
	return 0;
}