class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        //if(s.length()==0){return true;}
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z'){
                s1+=s[i];
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                s1+=s[i]+32;
            }
            else if(s[i]>='0'&&s[i]<='9'){
                s1+=s[i];
            }
            //else{return false;}
        }
        if(s1.length()==0)return true;
        //cout<<s1;
        int i=0,j=s1.length()-1;
        while(i<j){
            if(s1[i]==s1[j]){
                i++;j--;
            }
            else{return false;}
        }
        return true;
    }
};