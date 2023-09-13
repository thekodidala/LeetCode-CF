class Solution {
public:
    int numberOfSubstrings(string s) {
        //at least keyword is present so end-right if once abc is present length does not matter
        int n=s.length();
        int left=0,right=0,end=n-1;
        vector<int>v(3,0);
        int cnt=0;
        while(right<n){
            v[s[right]-'a']++;
            while(v[0]>0&&v[1]>0&&v[2]>0){
                cnt+=1+(end-right);
                v[s[left]-'a']--;
                left++;
            }
            right++;
        }
        return cnt;
    }
};