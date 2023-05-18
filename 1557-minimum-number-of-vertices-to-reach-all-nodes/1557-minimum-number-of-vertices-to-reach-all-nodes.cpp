class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>v,s(n);
        for(int i=0;i<edges.size();i++){
            s[edges[i][1]]=1;
        }
        for(int i=0;i<n;i++){
            if(s[i]==0){
                v.push_back(i);
            }
        }
        return v;
    }
};