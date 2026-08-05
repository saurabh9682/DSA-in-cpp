class Solution {
public:
    int maxDepth(string s) {
        /*Ek count = 0 lo (current depth track karega).
Ek maxDepth = 0 lo (maximum depth store karega).
String ko left se right traverse karo.
Agar ( mile:
count++
maxDepth = max(maxDepth, count)
Agar ) mile:
count--
Baaki characters (letters, digits, operators) ko ignore kar do.*/

         int depth = 0;      // Current nesting depth
        int maxDepth = 0;   // Maximum depth found

        for (int i = 0; i < s.size(); i++) {

            // Opening bracket -> go one level deeper
            if (s[i] == '(') {
                depth++;

                // Update maximum depth
                if (depth > maxDepth) {
                    maxDepth = depth;
                }
            }

            // Closing bracket -> come one level back
            else if (s[i] == ')') {
                depth--;
            }

            // Other characters are ignored
        }

        return maxDepth;
    }
};