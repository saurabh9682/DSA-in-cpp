// class Solution {
//     public int countPairs(List<Integer> nums, int target) {
//         Collections.sort(nums);
//         int i=0;
//         int j=nums.size()-1;
//         int count =0;
//         while(i<j){
//             if(nums.get(i)+nums.get(j)<target){
//                 count=count+j-i;
//                 i++;
//             }
//             else{
//                 j--;
//             }
//         }
//         return count;
//     }
// }







//brute force

class Solution {
    public int countPairs(List<Integer> nums, int target) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums.get(i)+nums.get(j)<target){
                    count++;
                }
            }
        }
        return count;
    }
}