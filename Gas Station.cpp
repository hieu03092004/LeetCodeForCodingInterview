#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total=0,tank=0,start=0;
        for(int i=0;i<gas.size();i++){
        	int diff=gas[i]-cost[i];
        	tank+=diff;
        	total+=diff;
        	if(tank<0){
        		start=i+1;
        		tank=0;
        	}
        }
        return total>=0 ? start:-1;
    }
};
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	Solution solution;
	vector<int>gas={2,3,4};
	vector<int>cost={3,4,3};
	cout<<solution.canCompleteCircuit(gas,cost);
}