class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& add) {
        vector<vector<int>>v;
        int n=intervals.size();
        for(int i=0;i<n;i++){
            //before
            if(intervals[i][1]<add[0]){
                v.push_back(intervals[i]);
            }
            //after
            else if(add[1]<intervals[i][0]){
                v.push_back(add);
                add=intervals[i];
            }
            else if(intervals[i][1]>=add[0] || intervals[i][0]<=add[1]){     
                add[0]=min(intervals[i][0],add[0]);
                add[1]=max(intervals[i][1],add[1]);
            }
        }
        v.push_back(add);
        return v;
    }
};