class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>v(n,0);
        queue<int>q;
        for(int i=0;i<n;i++){
            if(v[i])
                continue;
            else
                v[i]=1;
                q.push(i);
            while(!q.empty()){
                int temp=q.front();
                for(auto side:graph[temp]){
                    if(!v[side]){
                        v[side]=-v[temp];
                        q.push(side);}
                    else if(v[side]==v[temp]){return false;}
            }
            q.pop();
        }
        }
        return true;
    }
};