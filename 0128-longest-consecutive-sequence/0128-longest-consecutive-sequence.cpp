class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>us;
        if(nums.size()==0)return 0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            us.insert(nums[i]);
        }
        for(auto it:us){
            if(us.find(it-1)==us.end()){
                int cnt=1;
                int x=it;
                while(us.find(x+1)!=us.end()){
                    cnt++;
                    x++;
                }
                maxi=max(maxi,cnt);
            }
        }
        return maxi;
    }
};