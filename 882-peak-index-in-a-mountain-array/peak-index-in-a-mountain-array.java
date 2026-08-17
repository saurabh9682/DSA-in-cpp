class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int left=0;
        int right=arr.length-1;
        while(left<right){
            int mid=(left+right)/2;
            if(arr[mid]<arr[mid+1]){
                left=mid+1;
            }
            else {
                right=mid;
            }
        }
        return left;   //Hum left aur right ko move karte-karte peak ke ek hi index par le aate hain; jab left == right, wahi peak hai → return left.
    }
}