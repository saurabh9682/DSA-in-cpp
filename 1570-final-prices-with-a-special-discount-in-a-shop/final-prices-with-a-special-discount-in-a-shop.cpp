class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;                  // Monotonic Increasing Stack (stores original prices)
        int n = prices.size();

        // Traverse from Right -> Left to find Next Smaller or Equal element
        for(int i = n - 1; i >= 0; i--)
        {
            int curr = prices[i];       // Save original price (because prices[i] may change)

            // Remove all elements greater than current
            // Remaining top will be the Next Smaller or Equal element
            while(!st.empty() && st.top() > curr)
            {
                st.pop();
            }

            // If stack is not empty, top is the discount
            if(!st.empty())
            {
                prices[i] = curr - st.top();
            }

            // Push original price for future elements (left side)
            st.push(curr);
        }

        return prices;
    }
};