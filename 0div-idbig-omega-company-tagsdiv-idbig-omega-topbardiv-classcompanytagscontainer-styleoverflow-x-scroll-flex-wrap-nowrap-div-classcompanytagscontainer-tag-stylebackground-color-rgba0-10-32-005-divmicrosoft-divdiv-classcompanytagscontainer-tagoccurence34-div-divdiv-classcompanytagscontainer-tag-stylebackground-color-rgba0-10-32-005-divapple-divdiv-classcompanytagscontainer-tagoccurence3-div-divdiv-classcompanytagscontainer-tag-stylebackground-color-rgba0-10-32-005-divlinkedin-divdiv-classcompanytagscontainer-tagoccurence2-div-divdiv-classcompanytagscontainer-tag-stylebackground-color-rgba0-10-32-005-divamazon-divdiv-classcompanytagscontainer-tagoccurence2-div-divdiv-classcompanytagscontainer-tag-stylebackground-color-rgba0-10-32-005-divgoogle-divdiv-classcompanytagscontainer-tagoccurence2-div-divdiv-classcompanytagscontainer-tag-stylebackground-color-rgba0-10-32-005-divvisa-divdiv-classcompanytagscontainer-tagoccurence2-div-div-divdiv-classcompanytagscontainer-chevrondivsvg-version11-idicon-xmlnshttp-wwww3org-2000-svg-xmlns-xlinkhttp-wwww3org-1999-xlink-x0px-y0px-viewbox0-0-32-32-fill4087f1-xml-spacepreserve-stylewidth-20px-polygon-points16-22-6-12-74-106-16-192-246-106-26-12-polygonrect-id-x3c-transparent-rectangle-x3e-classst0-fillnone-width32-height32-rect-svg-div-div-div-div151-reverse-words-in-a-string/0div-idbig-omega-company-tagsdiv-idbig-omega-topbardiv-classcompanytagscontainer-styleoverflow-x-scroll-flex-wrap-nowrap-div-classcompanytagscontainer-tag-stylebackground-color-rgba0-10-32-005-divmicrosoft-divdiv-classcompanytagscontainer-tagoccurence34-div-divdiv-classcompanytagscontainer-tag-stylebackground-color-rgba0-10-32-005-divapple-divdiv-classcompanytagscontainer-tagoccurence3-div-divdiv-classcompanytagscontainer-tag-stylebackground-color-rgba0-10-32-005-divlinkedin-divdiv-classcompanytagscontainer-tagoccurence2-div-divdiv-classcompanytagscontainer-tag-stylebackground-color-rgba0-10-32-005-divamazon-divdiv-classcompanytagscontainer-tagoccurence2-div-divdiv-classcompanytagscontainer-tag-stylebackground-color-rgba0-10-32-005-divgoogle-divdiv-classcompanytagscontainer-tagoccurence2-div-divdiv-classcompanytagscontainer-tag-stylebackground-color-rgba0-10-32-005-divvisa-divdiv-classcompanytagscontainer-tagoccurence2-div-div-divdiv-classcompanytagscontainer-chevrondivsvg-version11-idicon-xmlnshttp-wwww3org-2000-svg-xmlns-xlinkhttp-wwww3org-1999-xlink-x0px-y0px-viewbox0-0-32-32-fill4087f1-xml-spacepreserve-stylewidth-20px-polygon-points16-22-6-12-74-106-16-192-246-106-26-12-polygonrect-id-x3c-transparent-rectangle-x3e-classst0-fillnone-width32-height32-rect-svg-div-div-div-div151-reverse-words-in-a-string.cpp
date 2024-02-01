class Solution {
public:
    //without using stack
    string reverseWords(string s) {
        int n=s.length();
        string res;
        for(int i=0;i<n;i++){
            string str;
            if(s[i]==' '){continue;}
            while(i<n &&s[i]!=' '){
                str+=s[i];
                i++;
            }
            if(res!=""){
                res=str+" "+res;
                
            }
            else{
                res=str;
            }
        }
        return res;
    }
};