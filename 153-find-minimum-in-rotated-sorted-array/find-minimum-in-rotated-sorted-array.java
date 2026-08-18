class Solution {
    public int findMin(int[] nums) {
        /*mid ko right se compare karo:
Agar nums[mid] > nums[right] → minimum right side me hai → left = mid + 1
Agar nums[mid] <= nums[right] → minimum left side ya mid ho sakta hai → right = mid
End me left == right hoga, wahi minimum element hai. */
    int left=0;
    int right=nums.length-1;
    while(left<right){
        int mid=(left+right)/2;
        if(nums[mid]>nums[right]){
            left=mid+1;// minimum right mein
        }
        else{
            right=mid;   // minimum left/mid mein
        }
    }
    return nums[left];   // minimum mil gaya
    }
}