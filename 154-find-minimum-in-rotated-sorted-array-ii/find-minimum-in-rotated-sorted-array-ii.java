class Solution {
    public int findMin(int[] nums) {
        /*mid > right → minimum right me → left = mid + 1
mid < right → minimum left ya mid me → right = mid
mid == right → pata nahi chal raha minimum kis side hai → right--*/
        int left=0;
        int right=nums.length-1;
        while(left<right){
            int mid=(left+right)/2;
            if(nums[mid]>nums[right]){
                left=mid+1;
            }
            else if(nums[mid]<nums[left]){
                right=mid;
            }
            else{
                right--;     // duplicate hatao
            }
        }
        return nums[left];  // minimum
    }
}