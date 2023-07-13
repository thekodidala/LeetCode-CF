class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>gr(numCourses);
        vector<int>indegree(numCourses,0);
        for(auto i:prerequisites){
            int course=i[0];
            int precourse=i[1];
            gr[precourse].push_back(course);
            indegree[course]++;
        }
        queue<int>q;
        for(int j=0;j<numCourses;j++){
            if(indegree[j]==0){q.push(j);}
        }
        while(!q.empty()){
            int course=q.front();
            q.pop();
            for(auto i:gr[course]){
                indegree[i]--;
                if(indegree[i]==0){
                    q.push(i);
                }
            }
        }
        for(auto i:indegree){
            if(i!=0){return false;}
        }
        return true;
    }
};