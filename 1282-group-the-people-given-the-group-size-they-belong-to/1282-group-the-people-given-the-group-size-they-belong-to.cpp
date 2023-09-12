class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& group) {
        int n=group.size();
        vector<vector<int>>res,temp(n+1);
        for(int i=0;i<n;i++){
            temp[group[i]].push_back(i);
            if(temp[group[i]].size()==group[i]){
                res.push_back({});
                swap(res.back(),temp[group[i]]);
            }
        }
        return res;
    }
};