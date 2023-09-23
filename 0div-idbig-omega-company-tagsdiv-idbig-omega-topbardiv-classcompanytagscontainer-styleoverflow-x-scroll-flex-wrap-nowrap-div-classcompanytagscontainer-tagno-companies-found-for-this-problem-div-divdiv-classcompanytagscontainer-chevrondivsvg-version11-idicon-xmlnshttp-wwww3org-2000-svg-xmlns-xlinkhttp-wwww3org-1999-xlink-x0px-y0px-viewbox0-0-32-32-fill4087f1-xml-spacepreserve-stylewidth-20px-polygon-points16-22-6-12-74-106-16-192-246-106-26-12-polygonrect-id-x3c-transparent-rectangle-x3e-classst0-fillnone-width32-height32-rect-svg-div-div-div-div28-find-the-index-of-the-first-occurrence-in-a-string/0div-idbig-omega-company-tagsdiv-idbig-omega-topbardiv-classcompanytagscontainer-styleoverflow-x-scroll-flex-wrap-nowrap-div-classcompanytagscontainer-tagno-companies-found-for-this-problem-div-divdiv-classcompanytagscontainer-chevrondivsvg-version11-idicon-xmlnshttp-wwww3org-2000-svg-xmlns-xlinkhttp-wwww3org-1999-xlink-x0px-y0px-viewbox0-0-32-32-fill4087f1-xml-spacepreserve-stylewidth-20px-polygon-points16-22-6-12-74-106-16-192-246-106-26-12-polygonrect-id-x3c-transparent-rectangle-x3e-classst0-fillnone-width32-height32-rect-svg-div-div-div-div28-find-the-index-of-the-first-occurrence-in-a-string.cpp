class Solution {
public:
    int strStr(string s, string t) {
        int m=s.length(),n=t.length();
        string ans="";
       // int ans=-1;
        for(int i=0;i<m;i++){
            ans=s.substr(i,n);
            if(ans==t){
                return i;
            }
        }
        return -1;
    }
};