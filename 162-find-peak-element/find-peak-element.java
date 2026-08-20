class Solution {
    public int findPeakElement(int[] nums) {
        /*mid aur mid + 1 compare karo:
Agar nums[mid] > nums[mid+1] → peak left side ya mid me hai → right = mid
Agar nums[mid] < nums[mid+1] → peak right side me hai → left = mid + 1
End me left == right → wahi peak index hai. */

int left=0;
int right=nums.length-1;
while(left<right){
    int mid=left+(right-left)/2;
    if(nums[mid]<nums[mid+1]){
        left=mid+1;
    }
    else{
        right=mid;
    }
}
return left;
    }
}