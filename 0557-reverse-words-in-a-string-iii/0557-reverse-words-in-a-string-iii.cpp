class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string res;
        string str="";
        bool flag=false;
        for(int i=0;i<n;i++){
            if(iswspace(s[i])){
                reverse(str.begin(),str.end());
                if(flag)
                    res+=" ";
                res+=str;
                str="";
                flag=true;
            }
            else
                str+=s[i];
        }
        reverse(str.begin(),str.end());
        if(flag)
            res+=" ";
        res=res+str;
        return res;
    }
};