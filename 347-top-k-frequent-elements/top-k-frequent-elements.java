
import java.util.*;


class Solution {
public int[] topKFrequent(int[] nums, int k) {
        //store number ->frequency
    HashMap<Integer,Integer>map=new HashMap<>();

    //count freq of every number
    for(int num:nums){
        map.put(num,map.getOrDefault(num,0)+1);
    }        
    //min heap based on frequency
    PriorityQueue<int[]>pq=new PriorityQueue<>((a,b)->a[1]-b[1]);

   // add every number with its frequency

    for(int num : map.keySet()){
        int frequency=map.get(num);
        pq.add(new int []{num,frequency});

        //keep k most frequent elements
        if(pq.size()>k){
            pq.poll();
        }
    }
    //store final answer
    int []answer=new int[k];
    for(int i=0;i<k;i++){
        answer[i]=pq.poll()[0];
    }
    return answer;
    }
};