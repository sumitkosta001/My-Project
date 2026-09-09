class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000) return 0;
        long long ans = 0, comma = 0, x = n, mul = 1000;
        while(x >= 1000){
            comma++;
            x /= 1000;
        }
        while(comma--){
            ans += n-mul+1;
            mul *= 1000;
        }
        return ans;
    }
};