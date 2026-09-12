class Solution {
public:
	static bool compare(vector<int> a, vector<int> b){
		return a[0] < b[0];
	}

    int minMeetingRooms(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), compare);

        // for(int i = 0 ; i < intervals.size(); i ++){
        // 	cout << intervals[i][0] << ", "<<intervals[i][1] << endl;
        // }

        priority_queue<int, vector<int>, greater<int> > h;
        for(int i = 0 ; i < intervals.size(); i ++){
        	int startTime = intervals[i][0];
        	int endTime = intervals[i][1];

        	if(h.empty()){
        		h.push(endTime);
        	}
        	else{
        		
        		// if(h.top() <= startTime){
        		// 	h.pop();
        		// 	h.push(endTime);
        		// }
        		// else{
        		// 	h.push(endTime);
        		// }

        		if(h.top() <= startTime){
        			h.pop();
        		}
        		h.push(endTime);
        	}
        }

        return h.size();
    }
};