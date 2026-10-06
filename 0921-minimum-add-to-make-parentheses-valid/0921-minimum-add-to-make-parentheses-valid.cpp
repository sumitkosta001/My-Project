class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        stack<char> st1,st2;
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '(') st1.push(s[i]);
            else {
                if(!st1.empty()) st1.pop();
                else cnt++;
            }
        }
        return cnt+st1.size();
    }
};