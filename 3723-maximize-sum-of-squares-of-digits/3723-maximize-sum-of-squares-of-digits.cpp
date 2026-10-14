class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int n = num;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            if(sum > 9) arr[i] = 9;
            else arr[i] = sum;

            if(sum > 0) sum -= arr[i];
        }
        
        if(sum != 0) return "";
        string ans = "";
        for(int i = 0;i<n;i++) ans += arr[i] + '0';
        return ans;
    }
};