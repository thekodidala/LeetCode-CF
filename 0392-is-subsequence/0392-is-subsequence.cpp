class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.length(),n=t.length();
        if(m==0)return true;
        if(n==0)return false;
        int i=0,j=0,cnt=0;
        while(i<n&&cnt!=m){
            if(t[i]==s[j]){
                i++;
                j++;
                cnt++;
            }
            else{
                i++;
            }
        }
        if(cnt==m){
            return true;
        }
        return false;
    }  
};