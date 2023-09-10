class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0)return 0;
        unordered_set<char>st;
        int left=0,right=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(st.find(s[i])!=st.end()){
                while(left<right&&st.find(s[i])!=st.end()){
                    st.erase(s[left]);
                    left++;
                }
            }
            st.insert(s[i]);
            right++;
            maxi=max(maxi,right-left);
        }
        return maxi;
    }
};