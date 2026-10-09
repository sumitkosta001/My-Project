class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        int ans = 0, left = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '('){
                left++;
            }else{
                if(i+1 < n && s[i+1] == ')'){
                    i++;
                }else{
                    ans++;
                }

                if(left > 0){
                    left--;
                }else{
                    ans++;
                }
            }
        }
        return 2*left+ans;
    }
};