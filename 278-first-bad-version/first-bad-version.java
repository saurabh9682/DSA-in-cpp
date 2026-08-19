/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        /*mid check karo:
isBadVersion(mid) == true → mid bad hai, but first bad ho sakta hai → right = mid
false → first bad right side me hai → left = mid + 1
End me left == right → wahi first bad version.*/

    int left=1;
    int right=n;
    while(left<right){
        int mid=left+(right-left)/2;
        if(isBadVersion(mid)){
            right=mid;
        }
        else{
            left=mid+1;
        }
    }
    return left;
    }
}