class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> dup;
        map<int,int> mpp;
        for(int i = 0;i<n;i++){
            int x = nums[i];
            int sum = 0;
            while(x>0){
                sum += x%10;
                x = x/10;
            }
            mpp[nums[i]] = sum;  
        }
        vector<pair<int, int>> vec(mpp.begin(), mpp.end());
        sort(vec.begin(), vec.end(), [](const auto &a, const auto &b) {
            if (a.second == b.second)
                return a.first < b.first;  
            return a.second < b.second;    
        });

        for(auto it:vec){
            dup.push_back(it.first);
        }
        map<int,int> mpp1;
        for(int i = 0;i<n;i++){
            mpp1[dup[i]] = i;
        }

        int swap = 0;
        vector<bool> visited(n,false); 
        for(int i = 0;i<n;i++){
            if(visited[i] || mpp1[nums[i]] == i) continue;
            int j = i,cycle = 0;
            while(!visited[j]){
                visited[j] = true;
                j = mpp1[nums[j]];
                cycle++;
            }
            if(cycle>1) swap += cycle-1;
        }

        return swap;
    }
};