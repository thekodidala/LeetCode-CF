class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        stack<string>st;
        string str;
        for(int i=0;i<n;i++){
            str="";
            if(s[i]==' ')continue;
            while(i<n &&s[i]!=' '){
                str+=s[i];
                i++;
            }
            st.push(str);
        }
        string res;
        while(!st.empty()){
            res+=st.top();
            st.pop();
            if(st.size()>0){
                res+=" ";
            }
        }
        return res;
    }
};