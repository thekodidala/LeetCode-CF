class Solution {
public:
    int minDeletions(string s) {
        vector<int>mp(26,0);
        for(auto i:s){
            mp[i-'a']++;
        }
        sort(mp.begin(),mp.end());
        int res=0;
        for(int i=24;i>=0;i--){
            if(mp[i]>=mp[i+1]){
                int temp=mp[i];
                mp[i]=max(0,mp[i+1]-1);
                res+=temp-mp[i];
            }
        }
        return res;
    }
};