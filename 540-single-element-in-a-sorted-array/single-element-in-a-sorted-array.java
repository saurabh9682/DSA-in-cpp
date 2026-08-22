class Solution {
    public int singleNonDuplicate(int[] nums) {
        int left=0;
        int right=nums.length-1;
        while(left<right){
            int mid=left+(right-left)/2;

            //mid ko even index banao tab compare karo 
            if(mid%2==1){
                mid--;
            }

            //pair correct hai single right mein 
            if(nums[mid]==nums[mid+1]){
                left=mid+2;
            }
            //nahi mila toh
            else{
                right=mid;
            }

        }
        return nums[left];
    }
}