class Solution {
public:
    void solve(int i,int k,int n,vector<int>&temp,vector<vector<int>>&res){
        if(i==n+1){
            if(temp.size()==k){
                res.push_back(temp);
                
            }
            return;
        }
        
        temp.push_back(i);
        solve(i+1,k,n,temp,res);
        temp.pop_back();
        solve(i+1,k,n,temp,res);
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>temp;
        solve(1,k,n,temp,res);
        return res;
    }
};