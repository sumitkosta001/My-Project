class Solution {
public:
    int Count(vector<int>& piles,int x,int h){
        int count = 0;
        for(int i = 0;i<piles.size();i++){
            if(count>h){
                return count;
            }
            if(piles[i]%x == 0){
                count = count + piles[i]/x;
            }else{
                count = count + piles[i]/x + 1;
            }
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        sort(piles.begin(),piles.end());
        int low = 1;
        int high = piles[n-1];
        int mini = INT_MAX;
        while(low<=high){
            int mid = (low+high)/2;
            int y = Count(piles,mid,h);
            if(y == h){
                mini = mid;
            }
            if(y>h){
                low = mid + 1;
            }else{
                high = mid-1;
            }
        }
        return min(mini,low); 
    }
};