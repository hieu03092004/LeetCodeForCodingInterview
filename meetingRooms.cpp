#include <bits/stdc++.h>
using namespace std;
class Interval {
	public:
	   int start, end;
 	   Interval(int start, int end) {
 	       this->start = start;
 	       this->end = end;
 	   }
};
class Solution {
public:
	static bool cmp(Interval a,Interval b){
		if(a.start!=b.start)
			return a.start <b.start;
		else
			return a.start<b.start;

	}
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        for(int i=1;i<intervals.size();i++){
        	int y=intervals[i-1].end;
        	int w=intervals[i].start;
        	if( w<y)
        		return false;
        }
        return true;
    }
};
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	Solution solution;
	vector<Interval>intervals={
		Interval(5, 8),
    	Interval(9, 15),
	};
	cout<<solution.canAttendMeetings(intervals);
}
