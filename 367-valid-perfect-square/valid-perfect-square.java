class Solution {
    public boolean isPerfectSquare(int num) {

        /*1 → num par Binary Search karo.
mid * mid check karo:
== num → true
< num → right jao → left = mid + 1
> num → left jao → right = mid - 1
Search khatam ho gaya aur exact square nahi mila → false.*/
        if(num==1){
            return true;
        }
        int left=1;
        int right=num;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(mid==num/mid&&num%mid==0){
                return true;
            }
            if(mid<num/mid){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return false;
    }
}