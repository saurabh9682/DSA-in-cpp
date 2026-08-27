import java.util.*;

class Solution {
    public long pickGifts(int[] gifts, int k) {
        PriorityQueue<Integer> pq=new PriorityQueue<>(Collections.reverseOrder());
        for(int gift:gifts){
            pq.add(gift);
        }
        for(int i=0;i<k;i++){
            int max=pq.poll();
            int remaining=(int)Math.sqrt(max);
            pq.add(remaining);
        }
        long total=0;
        while(!pq.isEmpty()){
            total=total+pq.poll();
        }
        return total;
    }
}