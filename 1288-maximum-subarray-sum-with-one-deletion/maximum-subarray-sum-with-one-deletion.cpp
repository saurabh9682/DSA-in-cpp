class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nopower=arr[0]; // No deletion used
        int power=0; // One deletion used
        int res=arr[0];
            for(int i=1;i<arr.size();i++){
               
               // Previous values save karo
                int prevnopower=nopower;
                int prevpower=power;
                int v1=arr[i];
                int v2=prevnopower+arr[i];
                int v3=prevpower+arr[i];
                int v4=prevnopower;
                
                //update
                nopower=max(v1,v2);
                power=max(v3,v4);

                res=max(res,max(nopower,power));

            }
            return res;
    }
};