class Solution {
public:
    string reorganizeString(string S) {
        int n=S.length();
        vector<int>v(26,0);
        for(auto a:S){
            v[a-'a']=v[a-'a']+1;
        }
        priority_queue<pair<int,char>>pq;
        for(int i=0;i<26;i++){
            if(v[i]>(n+1)/2){return "";}
            if(v[i]){
                pq.push({v[i],i+'a'});
            }
        }
        queue<pair<int,char>>q;
        string ans;
        while(!pq.empty()||q.size()>1){
            if(q.size()>1){
                auto cur=q.front();
                q.pop();
                if(cur.first!=0)pq.push(cur);
            }
            if(!pq.empty()){
                auto cur=pq.top();
                pq.pop();
                ans+=cur.second;
                cur.first--;
                q.push(cur);
            }
        }
        return ans;
    }
};