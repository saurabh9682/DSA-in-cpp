class Solution {
    public int countNegatives(int[][] grid) {
        int count =0;
        int n=grid[0].length;
        for(int i=0;i<grid.length;i++){
            int low=0;
            int high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(grid[i][mid]<0){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            count=count+n-low;
        }
        return count;
    }
};