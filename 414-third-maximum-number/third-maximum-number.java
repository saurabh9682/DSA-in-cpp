class Solution {
    public int thirdMax(int[] nums) {
        HashSet<Integer>set= new HashSet<>();
        for(int i=0;i<nums.length;i++){
            set.add(nums[i]);
        }
        ArrayList<Integer> list=new ArrayList<>(set);
        Collections.sort(list);
        int n=list.size();
        if(n<3){
            return list.get(n-1);
        }
        return list.get(n-3);
    }
}