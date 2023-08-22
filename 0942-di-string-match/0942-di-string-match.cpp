class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low=0,n=s.length(),high=s.length();
        vector<int>v(high+1,0);
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                v[i]=low;
                low++;
            }
            else{
                v[i]=high;
                high--;
            }
        }
        v[n]=high;
        return v;
    }
};