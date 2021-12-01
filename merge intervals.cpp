class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergeintervals;
        if(intervals.size() == 0)
        {
              return mergeintervals; 
        }
        sort(intervals.begin(),intervals.end());
        vector<int> a = intervals[0];
        for(auto it: intervals)
        {
            if(it[0] <= a[1])
            {
                a[1] = max(it[1], a[1]);
            }
            else
            {
                mergeintervals.push_back(a);
                a = it;
            }
        }
        mergeintervals.push_back(a);
        return mergeintervals;
    }
};