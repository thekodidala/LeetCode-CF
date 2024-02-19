class Solution {
public:
    void func(int ind,string s,vector<string>&temp,vector<vector<string>>&ans){
        if(ind==s.size()){
            ans.push_back(temp);
        }
        for(int i=ind;i<s.size();i++){
            if(ispalindrome(s,ind,i)){
                temp.push_back(s.substr(ind,i-ind+1));
                func(i+1,s,temp,ans);
                temp.pop_back();
            }
        }
        return;
    }
    bool ispalindrome(string s,int left,int right){
        while(left<=right){
            if(s[left]!=s[right])return false;
            left++;
            right--;   
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        func(0,s,temp,ans);
        return ans;
    }
};