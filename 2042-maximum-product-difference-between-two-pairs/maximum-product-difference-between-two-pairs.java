//optimal approch 

class Solution {
    public int maxProductDifference(int[] nums) {
        int min1=Integer.MAX_VALUE;
        int min2=Integer.MAX_VALUE;

        int max1=Integer.MIN_VALUE;
        int max2=Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++){
            int x=nums[i];
            if(x<min1){
                min2=min1; //second smallest
                min1=x; //smallest
            }
            else if(x<min2){
                min2=x;
            }
            if(x>max1){
                max2=max1;
                max1=x;
            }
            else if(x>max2){
                max2=x;
            }
        }
        return (max1*max2)-(min1*min2);
    }
    }


// class Solution {
//     public int maxProductDifference(int[] nums) {
//        Arrays.sort(nums);
//        int n=nums.length;
//        int minproduct=nums[0]*nums[1];
//        int maxproduct=nums[n-1]*nums[n-2];
//        return maxproduct-minproduct; 
//     }
// }