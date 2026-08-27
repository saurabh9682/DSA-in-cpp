class Solution {
    public int minStoneSum(int[] piles, int k) {
        PriorityQueue<Integer> pq=new PriorityQueue<>(Collections.reverseOrder());
        for(int pile:piles){
            pq.add(pile);
        }
        for(int i=0;i<k;i++){
            int max=pq.poll();
            max=max-max/2;
            pq.add(max);
        }
        int sum=0;
        while(!pq.isEmpty()){
            sum=sum+pq.poll();
        }
        return sum;
    }
}