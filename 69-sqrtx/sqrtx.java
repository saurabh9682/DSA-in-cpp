class Solution {
    public int mySqrt(int x) {
        /*Search range 1 → x rakho.
mid * mid check karo:
Agar mid * mid <= x → mid possible answer hai → right side bhi check karo → left = mid + 1
Agar mid * mid > x → mid bada hai → right = mid - 1
End me jo largest mid mila jiska square <= x tha, wahi answer hai. */

if(x==0){
    return 0;
}
int left=1;
int right=x;
while(left<=right){
    int mid =left+(right-left)/2;
    if(mid<=x/mid){
        left=mid+1;
    }
    else{
        right=mid-1;
    }

}
return right;
    }
}