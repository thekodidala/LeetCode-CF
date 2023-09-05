class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int tot=0,cs=0,ans=0;
        for(int i=0;i<n;i++){
            tot+=gas[i]-cost[i];
            cs+=gas[i]-cost[i];
            if(cs<0){
                ans=i+1;
                cs=0;
            }
        }
        if(tot>=0){
            return ans;
        }
        return -1;
    }
};