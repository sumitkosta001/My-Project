class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int n = num;
        string ans = "";
    
        for(int i = 0;i<n;i++){
            if(sum > 9) ans += 9 + '0';
            else ans += sum + '0';

            if(sum > 0) sum -= ans[ans.size()-1]-'0';
        }

        if(sum != 0) return "";
    
        return ans;
    }
};