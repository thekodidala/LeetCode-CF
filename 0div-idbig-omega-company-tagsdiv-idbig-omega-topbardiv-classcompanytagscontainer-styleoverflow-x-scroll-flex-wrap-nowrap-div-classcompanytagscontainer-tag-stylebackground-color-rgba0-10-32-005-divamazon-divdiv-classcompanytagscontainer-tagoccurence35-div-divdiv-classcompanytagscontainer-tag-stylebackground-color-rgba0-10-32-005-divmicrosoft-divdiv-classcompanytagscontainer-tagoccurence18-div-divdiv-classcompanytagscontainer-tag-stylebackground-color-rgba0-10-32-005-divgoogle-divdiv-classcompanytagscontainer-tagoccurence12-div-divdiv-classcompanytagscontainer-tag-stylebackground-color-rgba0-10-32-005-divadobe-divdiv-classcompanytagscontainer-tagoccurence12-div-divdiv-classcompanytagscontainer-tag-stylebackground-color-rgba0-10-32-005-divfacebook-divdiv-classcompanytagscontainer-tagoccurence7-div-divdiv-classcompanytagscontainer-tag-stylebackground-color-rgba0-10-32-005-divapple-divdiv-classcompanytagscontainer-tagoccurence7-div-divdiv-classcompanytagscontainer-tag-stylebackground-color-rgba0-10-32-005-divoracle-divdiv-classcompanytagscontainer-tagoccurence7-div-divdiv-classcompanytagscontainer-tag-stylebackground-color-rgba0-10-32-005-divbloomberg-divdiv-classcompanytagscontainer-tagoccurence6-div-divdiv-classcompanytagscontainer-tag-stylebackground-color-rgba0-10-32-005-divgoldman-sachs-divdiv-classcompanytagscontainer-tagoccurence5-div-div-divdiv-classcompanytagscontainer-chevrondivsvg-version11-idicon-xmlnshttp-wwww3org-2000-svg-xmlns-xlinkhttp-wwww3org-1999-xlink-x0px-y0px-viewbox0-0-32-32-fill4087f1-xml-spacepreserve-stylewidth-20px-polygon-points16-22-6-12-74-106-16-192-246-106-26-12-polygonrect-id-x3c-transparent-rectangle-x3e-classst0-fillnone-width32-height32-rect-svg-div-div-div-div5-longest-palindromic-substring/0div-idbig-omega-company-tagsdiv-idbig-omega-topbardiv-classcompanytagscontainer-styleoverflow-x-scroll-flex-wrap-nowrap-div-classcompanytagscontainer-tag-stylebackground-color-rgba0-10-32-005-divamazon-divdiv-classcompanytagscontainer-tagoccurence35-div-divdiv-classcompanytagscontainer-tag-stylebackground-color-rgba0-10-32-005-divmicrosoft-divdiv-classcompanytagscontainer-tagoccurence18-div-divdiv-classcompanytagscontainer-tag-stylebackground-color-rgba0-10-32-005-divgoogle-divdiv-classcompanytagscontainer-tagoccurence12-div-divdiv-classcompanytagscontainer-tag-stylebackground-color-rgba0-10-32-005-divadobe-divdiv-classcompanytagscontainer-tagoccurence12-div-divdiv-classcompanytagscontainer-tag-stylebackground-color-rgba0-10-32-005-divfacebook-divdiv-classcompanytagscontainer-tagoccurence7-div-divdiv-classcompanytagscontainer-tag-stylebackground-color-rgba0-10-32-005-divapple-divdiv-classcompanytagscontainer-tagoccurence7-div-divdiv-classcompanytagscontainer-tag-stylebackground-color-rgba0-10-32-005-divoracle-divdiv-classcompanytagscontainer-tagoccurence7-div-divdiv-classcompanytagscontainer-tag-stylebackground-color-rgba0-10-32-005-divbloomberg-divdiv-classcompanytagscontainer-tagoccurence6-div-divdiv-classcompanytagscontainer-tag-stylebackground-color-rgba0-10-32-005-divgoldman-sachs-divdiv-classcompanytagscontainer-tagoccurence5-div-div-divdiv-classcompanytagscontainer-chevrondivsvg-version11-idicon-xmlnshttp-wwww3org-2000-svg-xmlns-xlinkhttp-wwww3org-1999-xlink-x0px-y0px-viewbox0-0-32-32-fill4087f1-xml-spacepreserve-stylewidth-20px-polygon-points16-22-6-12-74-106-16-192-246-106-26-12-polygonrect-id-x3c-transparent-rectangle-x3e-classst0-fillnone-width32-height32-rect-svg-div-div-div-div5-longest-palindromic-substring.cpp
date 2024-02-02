class Solution {
public:
    void solve(int l,int r,string s,int &st,int &len){
        while(l>=0 &&r<s.length()){
            if(s[l]==s[r]){
                l--;r++;
            }
            else{break;}
        }
        int mx=r-l-1;
        if(mx>len){
            len=mx;
            st=l+1;
        }
    }
    string longestPalindrome(string s) {
        int n=s.length();
        if(n<=1){return s;}
        int l=0,r=0;
        int st=0,len=1;
        for(int i=0;i<n;i++){
            l=i,r=i;
            solve(l,r,s,st,len);
            solve(l,r+1,s,st,len);
        }
        return s.substr(st,len);
    }
};