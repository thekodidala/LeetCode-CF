class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0,n=s.length(),mini=INT_MAX;
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<t.length();i++){mp[t[i]]++;}
        int k=mp.size();
        int cnt=0,start=0;
        
        while(r<n){
            mp[s[r]]--;
            if(mp[s[r]]==0){
                cnt++;
            }
            while(cnt==k){
                if(r-l+1<mini){
                    start=l;
                    mini=r-l+1;
                }
                mp[s[l]]++;
                if(mp[s[l]]>0){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        if(mini!=INT_MAX){
            return s.substr(start,mini);
        }
        else
            return "";
    }
};