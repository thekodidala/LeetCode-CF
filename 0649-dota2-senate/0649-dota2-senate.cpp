class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>r,d;
        int n=senate.length();
        for(int i=0;i<n;i++){
            (senate[i]=='R')?r.push(i):d.push(i);
        }
        while(!r.empty()&&!d.empty()){
            int st1=r.front(),st2=d.front();
            r.pop(),d.pop();
            st1<st2?r.push(st1+n):d.push(st2+n);
        }
        return r.size()>d.size()?"Radiant":"Dire";
    }
};