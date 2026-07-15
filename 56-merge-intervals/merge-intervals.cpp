class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //sabse pahle sort kardenge 
        sort(intervals.begin(),intervals.end());

        vector<vector<int>>ans;
        //interval ke andar ghuso pahle wale
        int start=intervals[0][0];
        int end=intervals[0][1];
        //traverse karo intervalo me
        for(int i=1;i<intervals.size();i++){
            //suppose 2nd waala
            int currstart=intervals[i][0];
            int currend=intervals[i][1];
            //if overlap hai
            if(end>=currstart){
                end=max(end,currend);
            }
            //if overlap nahi hai tab
            else{
                ans.push_back({start,end});
                start=currstart;
                end=currend;
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};