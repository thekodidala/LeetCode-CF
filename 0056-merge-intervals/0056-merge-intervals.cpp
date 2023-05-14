class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        stack<pair<int,int>>st;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++){
            if( st.size()>0 && st.top().second >=intervals[i][0]){
                st.top().second=max(intervals[i][1],st.top().second);
            }
            else{
                st.push({intervals[i][0],intervals[i][1]});
            }
        }
        vector<vector<int>>v;
        while(!st.empty()){
            v.push_back({st.top().first,st.top().second});
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};