class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>words(wordDict.begin(),wordDict.end());
        int n=s.length();
        queue<int> q;
        vector<bool>seen(n,false);
        q.push(0);
        while(!q.empty()){
            int start=q.front();
            q.pop();
            if(start==n){return true;}
            for(int end=start+1;end<=n;end++){
                if(seen[end]){continue;}
                if(words.find(s.substr(start,end-start))!=words.end()){
                    q.push(end);
                    seen[end]=true;
                }
            }
        }
        return false;
    }
};