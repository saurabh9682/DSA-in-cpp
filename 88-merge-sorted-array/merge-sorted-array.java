/*

 */





class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
      int i=m-1; //nums1ke last valid element par pointer rakho 
      int j=n-1;  //nums ke last element par pointer rakho 
      int k=m+n-1; //nums1 ki last position par pointer rakho 
      while(i>=0 && j>=0){ //jab tak dono me elment bache hue hai comapre karo
        if(nums1[i]>nums2[j]){ //dono element ki current elemntcompare karo agar nums1 ke elemt bada hai to last me rakho 
            nums1[k]=nums1[i]; //bada element ki last postion par rakho 
            i--;//nums1 kki previous element par jao 
        }
        else {
            nums1[k]=nums2[j]; //nums2 ka e;lement nums 1 me copy karo 
            j--; //nums 2 ke previous elemnt par jao 
        }
        k--; //agli available previous position par jao 
      }

      while(j>=0){ //agar nums 2 me element bach gaye ho toh unhe copy karo 
        nums1[k]=nums2[j]; //nums2 ka remaining element nums1 mein dalo 
        j--;
        k--;
      }
}
}