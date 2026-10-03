class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        int maxi = 0;
        for(int i = 0;i<n;i++){
            int br = 0;
            for(int j = i;j<n;j++){
                if(s[j] == '(') br++;
                else{
                    if(br > 0) br--;
                    else break;
                }
                if(br == 0) maxi = max(maxi,j-i+1);
            }
        }
        return maxi;
    }
};