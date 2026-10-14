#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	static bool check(vector<int>piles,int x,int h){
		long long ans=0;
		for(int i=0;i<piles.size();i++){
			if(x>=piles[i])
				ans++;
			else{
				ans+=piles[i]/x;
				if(piles[i]%x!=0)
					ans++;
			}
		}
		if(ans<=h)
			return true;
		else
			return false;
	}
    int minEatingSpeed(vector<int>& piles, int h) {
        int right=*max_element(piles.begin(),piles.end());
        int left=1,an;
        while(left<=right){
        	int mid=(left+right)/2;
        	if(check(piles,mid,h)){
        		ans=mid;
        		right=mid-1;
        	}
        	else
        		left=mid+1;
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
	int h=4;
	vector<int>piles={25,10,23,4};
	cout<<solution.minEatingSpeed(piles,h);
}