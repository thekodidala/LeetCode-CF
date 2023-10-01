class Solution {
public:
    string reverseWords(string s) {
        //stringstream is used to read string word by word 
        string word="";
        string res;
        //s+=" ";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                word+=s[i];
            }
            else{
                int sz=word.size();
                if(sz!=0){
                    reverse(word.begin(),word.end());
                    res+=word;
                    res+=" ";
                }
                word="";
            }
        }
        reverse(word.begin(),word.end());
        res+=word;
        return res;
    }
};