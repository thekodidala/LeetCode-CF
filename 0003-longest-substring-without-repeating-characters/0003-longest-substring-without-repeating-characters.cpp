class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0)return 0;
        unordered_set<char>st;
        int left=0;
        int maxi=INT_MIN;
        for(int r=0;r<n;r++){
            if(st.find(s[r])!=st.end()){
                while(left<r&&st.find(s[r])!=st.end()){
                    st.erase(s[left]);
                    left++;
                }
            }
            st.insert(s[r]);
            maxi=max(maxi,r-left+1);
        }
        return maxi;
    }
};