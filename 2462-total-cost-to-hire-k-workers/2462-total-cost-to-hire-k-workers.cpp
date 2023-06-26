class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int i=0,j=costs.size()-1,cnt=0;
        long long res=0;
        priority_queue<int,vector<int>,greater<int>>p1,p2;
        while(k>0){
            while(p1.size()<candidates && i<=j)p1.push(costs[i++]);
            while(p2.size()<candidates && j>=i)p2.push(costs[j--]);
            int a=p1.size()>0?p1.top():INT_MAX;
            int b=p2.size()>0?p2.top():INT_MAX;
            if(a<=b){res+=a;p1.pop();}
            else{res+=b;p2.pop();}
            k--;
        }
        return res;
    }
};