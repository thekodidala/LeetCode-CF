class Solution {
public:
    vector<string>alt={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void letter(string& digits,vector<string>& res,string curstr,int idx){
        if(idx>=digits.length()){
            res.push_back(curstr);
            return;
        }
        for(int i=0;i<alt[digits[idx]-'0'].length();i++){
            letter(digits,res,curstr+alt[digits[idx]-'0'][i],idx+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if(digits.length()==0){
            return res;
        }
        letter(digits,res,"",0);
        return res;
    }
};