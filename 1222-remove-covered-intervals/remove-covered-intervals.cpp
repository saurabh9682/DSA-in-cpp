class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        //Jo interval kisi doosre interval ke andar poori tarah aa jaye, usko remove kar do.


        //Start ascending ,Agar start same ho , to End descending
        //[1,8],[1,5] Isi order me aana chahiye.
        //Agar ulta aaya  [1,5],[1,8] to algorithm fail ho jayega.

        
          sort(intervals.begin(), intervals.end(),
        [](vector<int>& a, vector<int>& b)
        {
            if(a[0] == b[0])
                return a[1] > b[1];

            return a[0] < b[0];
        });

        int removed = 0;

        int start = intervals[0][0];
        int end = intervals[0][1];

        for(int i = 1; i < intervals.size(); i++)
        {
            int curStart = intervals[i][0];
            int curEnd = intervals[i][1];

            // Current interval is covered
            if(curEnd <= end)
            {
                removed++;
            }
            else
            {
                start = curStart;
                end = curEnd;
            }
        }

        return intervals.size() - removed;
    }
};