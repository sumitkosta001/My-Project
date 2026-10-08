class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int balance = 0; // Track the nesting level
        
        for (char c : s) {
            if (c == '(') {
                // Only add '(' if it's not the outermost
                if (balance > 0) {
                    result += c;
                }
                balance++; // Increase nesting level
            } else if (c == ')') {
                balance--; // Decrease nesting level
                // Only add ')' if it's not the outermost
                if (balance > 0) {
                    result += c;
                }
            }
        }
        
        return result;
    }
};
