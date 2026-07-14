class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current =0;
        int maxaltitude=0;
        for(int i=0;i<gain.size();i++){
            current+=gain[i];
           maxaltitude=max(maxaltitude,current);
        }
        return maxaltitude;
    }
};