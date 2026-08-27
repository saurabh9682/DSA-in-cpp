import java.util.*;
class Solution {
    public int halveArray(int[] nums) {
        PriorityQueue<Double>pq=new PriorityQueue<>(Collections.reverseOrder());
        double sum=0;
        for(int num:nums){
            sum=sum+num;
            pq.add((double)num);
        }
        double target=sum/2;
        int operations=0;
        while(sum>target){
            double max=pq.poll();
            double half=max/2;
            //remove the reduced amount from total
            sum=sum-half;
            //heap me mwapas daal do means 19 hatakar ab 9.5 aajyega
            pq.add(half);
            operations++;
        }
        return operations;
    }
}