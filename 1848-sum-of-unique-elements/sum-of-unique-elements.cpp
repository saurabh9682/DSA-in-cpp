class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
//         Ek HashMap lo: number → kitni baar aaya.
// Puri array traverse karke har number ka count ++ karo.
// Ab HashMap ko traverse karo:
// Agar kisi number ka count == 1 hai → usko sum me add karo.
// count > 1 hai → ignore karo.
// End me sum return karo.

//to store freq
unordered_map<int,int>mp;
//har element ki frequency count karo
for(int i=0;i<nums.size();i++){
    mp[nums[i]]++;
}
int sum=0;
for(int i=0;i<nums.size();i++){
    if(mp[nums[i]]==1){
        sum=sum+nums[i];
    }
}
return sum;


    }
};