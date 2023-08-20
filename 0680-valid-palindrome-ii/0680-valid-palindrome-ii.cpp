class Solution {
public:
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        if(s.length()<=2)return true;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                
                int l=i+1,r=j;
                while(l<=r&&s[l]==s[r]){l++;r--;}
                if(l>=r)return true;
                
                int l1=i,r1=j-1;
                while(l1<=r1 &&s[l1]==s[r1]){l1++;r1--;}
                if(l1>=r1)return true;
                
                return false;
            }
        }
        return true;
    }
};