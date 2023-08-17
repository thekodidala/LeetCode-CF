class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        priority_queue<int>g1,s1;
        for(int i=0;i<g.size();i++){
            g1.push(g[i]);
        }
        for(int j=0;j<s.size();j++){
            s1.push(s[j]);
        }
        int count=0;
        while(!s1.empty()&&!g1.empty()){
            if(s1.top()>=g1.top()){
                s1.pop();
                g1.pop();
                count++;
            }
            else{
                g1.pop();
            }
        }
        return count;
    }
};