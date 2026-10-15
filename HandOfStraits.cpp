#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0)
        	return false;
        map<int,int>mp;
        for(int i=0;i<hand.size();i++)
        	mp[hand[i]]++;
       	while(!mp.empty()){
       		int start=mp.begin()->first;
       		for(int j=start;j<start+groupSize;j++){
       			if(mp.count(j)==0)
       				return false;
       			mp[j]--;
       			if(mp[j]==0)
       				mp.erase(j);
       		}
       	}
       	return true;

    }
};
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	Solution solution;
	vector<int>hand={1,2,3,3,4,5,6,7};
	int groupSize =4;
	cout<<solution.isNStraightHand(hand,groupSize);
}