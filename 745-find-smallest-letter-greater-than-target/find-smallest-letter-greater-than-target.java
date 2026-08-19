class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        /*mid check karo:
Agar letters[mid] <= target → answer right side me → left = mid + 1
Agar letters[mid] > target → ye possible answer hai → right = mid - 1
End me left jis index par hoga, wahi smallest greater letter hai.
Agar left == n ho jaye → first letter return karna hai (cyclic).*/

    int left=0;
    int right=letters.length-1;
    while(left<right){
        int mid=left+(right-left)/2;
        if(letters[mid]>target){
            right=mid;
        }
        else{
            left=mid+1;
        }

    }
    //greter ni mila toh first letter
    if(letters[left]<=target){
        return letters[0];
    }

        return letters[left];
    }
}