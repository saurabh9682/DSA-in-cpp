class Solution {
public:

    // Ek string ko process karke final string return karega

     // Dono strings (s aur t) ko alag-alag process karo.
        // Har character ke liye:
        // Agar character normal hai → stack me push karo.
        // Agar # mile:
        // Stack empty nahi hai → pop kar do.
        // Empty hai → ignore kar do.
        // Dono strings process hone ke baad final strings compare kar lo.
        // Agar same hain → true, warna false.
    string buildString(string s)
    {
        stack<char> st;

        for(int i = 0; i < s.size(); i++)
        {
            char curr = s[i];

            // Backspace
            if(curr == '#')
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
            // Normal character
            else
            {
                st.push(curr);
            }
        }

        string ans = "";

        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }

        // Reverse because stack gives reverse order
        reverse(ans.begin(), ans.end());

        return ans;
    }

    bool backspaceCompare(string s, string t) {

       

        return buildString(s) == buildString(t);
    }
};