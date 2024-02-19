class Solution {
public:
    void func(int ind,string digits,vector<string>arr,vector<string>&res,string t){
        if(ind==digits.size()){
            if(t.size()==digits.size()){
                res.push_back(t);
            }
            return;
        }
        for(int i=0;i<arr[digits[ind]-'0'].size();i++){
            //t=t+arr[digits[ind]-'0'][i]; next time don't write this pass string as parameter becoz if we write here then not removing the letter which added eariler so
            func(ind+1,digits,arr,res,t+arr[digits[ind]-'0'][i]);
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        vector<string>arr={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>res;
        string t;
        if(digits.size()==0){
            return res;
        }
        func(0,digits,arr,res,t);
        return res;
    }
};