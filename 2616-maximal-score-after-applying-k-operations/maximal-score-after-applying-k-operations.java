import java.util.*;
class Solution {
    public long maxKelements(int[] nums, int k) {
        PriorityQueue<Integer>pq=new PriorityQueue<>(Collections.reverseOrder());
        for(int num:nums){
            pq.add(num);
        }
            long score=0;

            for(int i=0;i<k;i++){
                int max=pq.poll();
                score=score+max;
                int newscore = (max+2)/3;
                pq.add(newscore);
            }
            return score;
    }
}