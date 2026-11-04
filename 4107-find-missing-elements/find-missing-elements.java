// class Solution {
//     public List<Integer> findMissingElements(int[] nums) {
//         HashSet<Integer> set=new HashSet<>();
//         int min=Integer.MAX_VALUE;
//         int max= Integer.MIN_VALUE;
//         for(int i=0;i<nums.length;i++){
//             min=Math.min(min,nums[i]);
//             max=Math.max(max,nums[i]);
//             set.add(nums[i]);
//         }
//         List<Integer>ans=new ArrayList<>();
//         for(int i=min+1;i<max;i++){
//             if(!set.contains(i)){
//                 ans.add(i);
//             }
//         }
//         return ans;
//     }
// }




//method 2


class Solution {
    public List<Integer> findMissingElements(int[] nums){
    Arrays.sort(nums);
    List<Integer>ans=new ArrayList<>();
    for(int i=0;i<nums.length-1;i++){
        for(int j=nums[i]+1;j<nums[i+1];j++){
            ans.add(j);
        }
    }
    return ans;
    }

    }
