class Solution {
public:
    void solve(int l,int r,string t,int &st,int &len){
        int n=t.length();
        while(l>=0 && r<n){
            if(t[l]==t[r]){
                l--;
                r++;
            }
            else{
                break;
            }
        }
        int mx=r-l-1;
        if(mx>len){
            len=mx;
            st=l+1;
            //end=r-1;
        }   
    }
    string longestPalindrome(string s) {
        int n=s.length();
        if(n<=1){return s;}
        //for odd length palindrome
        int st=0,end=0,len=1;
        for(int i=0;i<n;i++){
            int l=i,r=i;
            solve(l,r,s,st,len);
        }
        //for even length palindrome
        for(int i=0;i<n-1;i++){
            int l=i,r=i+1;
            solve(l,r,s,st,len);
        }
        return s.substr(st,len);
    }
    
};