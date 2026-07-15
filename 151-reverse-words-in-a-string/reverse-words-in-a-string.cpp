class Solution {
public:
    string reverseWords(string s) {
        //Words ka order reverse karna hai.Characters reverse nahi karne.
        //tareeka Hum peeche se string padhenge.
        string ans="";
        int i=s.size()-1;
        while(i>=0){
            while(i>=0&&s[i]==' '){//space jaise aaye turant skip karo
                i--;
            }
            if(i<0){
                break;
            }
            //word ka end ke liye
            int end=i;
            //word ka start ke liye
            while(i>=0 &&s[i]!=' '){//jab tak chalo jab tak word ka space na jaye 
                i--;
            }
            if(ans!=""){
                ans+=" ";
            }
            for(int j=i+1;j<=end;j++){
                ans+=s[j];
            }
        }
        return ans;
    }
};