class Solution {
public:
    int romanToInt(string s){
        unordered_map<char,int>mp={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int res=mp[s[s.length()-1]];
        for(int i=s.length()-2;i>=0;i--){
            if(mp[s[i]]<mp[s[i+1]]){
                res=res-mp[s[i]];
            }
            else{
                res+=mp[s[i]];
            }
        }
        return res;
    }
};