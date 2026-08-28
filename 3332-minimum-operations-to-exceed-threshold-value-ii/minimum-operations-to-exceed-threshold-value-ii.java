class Solution {
    public int minOperations(int[] nums, int k) {
       PriorityQueue<Long>pq=new PriorityQueue<>(); 
    for(int num:nums){
        pq.add((long)num);
    }
    int operations=0;
    //continue untile we get smaller is below k
    while(pq.peek()<k){
    long x=pq.poll();
    long y=pq.poll();
    long newvalue=Math.min(x,y)*2+Math.max(x,y);

    //add new value to the heap
    pq.add(newvalue);
    operations++;
    }
    return operations;
    }

}