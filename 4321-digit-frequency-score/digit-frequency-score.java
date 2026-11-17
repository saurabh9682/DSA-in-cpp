class Solution {
    public int digitFrequencyScore(int n) {
        HashMap<Integer,Integer>map=new HashMap<>();
        String s=String.valueOf(n);
        for(int i=0;i<s.length();i++){
            int digit=s.charAt(i)-'0';
            map.put(digit, map.getOrDefault(digit,0)+1);
        }
        int ans=0;
        for(int key:map.keySet()){
            ans=ans+key*map.get(key);
        }
        return ans;
    }
}