class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
         sort(intervals.begin(), intervals.end());

        int count = 0;

        int start = intervals[0][0];
        int end = intervals[0][1];

        for(int i = 1; i < intervals.size(); i++)
        {
            int curStart = intervals[i][0];
            int curEnd = intervals[i][1];

            // Overlap
            if(end > curStart)
            {
                count++;// no of overlap badhega jo tumhe remove kana hai 

                // Chhota end wala interval rakho taki kam overlap ho
                end = min(end, curEnd);
            }
            // No Overlap
            else
            {
                start = curStart;
                end = curEnd;
            }
        }

        return count;
    }
};