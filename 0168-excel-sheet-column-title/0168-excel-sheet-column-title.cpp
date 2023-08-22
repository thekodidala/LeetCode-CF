class Solution {
public:
    string convertToTitle(int col) {
        string ans="";
        int n=0;
        while(col>0){
            col--;
            n=col%26;
            ans+='A'+n;
            col=col/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};