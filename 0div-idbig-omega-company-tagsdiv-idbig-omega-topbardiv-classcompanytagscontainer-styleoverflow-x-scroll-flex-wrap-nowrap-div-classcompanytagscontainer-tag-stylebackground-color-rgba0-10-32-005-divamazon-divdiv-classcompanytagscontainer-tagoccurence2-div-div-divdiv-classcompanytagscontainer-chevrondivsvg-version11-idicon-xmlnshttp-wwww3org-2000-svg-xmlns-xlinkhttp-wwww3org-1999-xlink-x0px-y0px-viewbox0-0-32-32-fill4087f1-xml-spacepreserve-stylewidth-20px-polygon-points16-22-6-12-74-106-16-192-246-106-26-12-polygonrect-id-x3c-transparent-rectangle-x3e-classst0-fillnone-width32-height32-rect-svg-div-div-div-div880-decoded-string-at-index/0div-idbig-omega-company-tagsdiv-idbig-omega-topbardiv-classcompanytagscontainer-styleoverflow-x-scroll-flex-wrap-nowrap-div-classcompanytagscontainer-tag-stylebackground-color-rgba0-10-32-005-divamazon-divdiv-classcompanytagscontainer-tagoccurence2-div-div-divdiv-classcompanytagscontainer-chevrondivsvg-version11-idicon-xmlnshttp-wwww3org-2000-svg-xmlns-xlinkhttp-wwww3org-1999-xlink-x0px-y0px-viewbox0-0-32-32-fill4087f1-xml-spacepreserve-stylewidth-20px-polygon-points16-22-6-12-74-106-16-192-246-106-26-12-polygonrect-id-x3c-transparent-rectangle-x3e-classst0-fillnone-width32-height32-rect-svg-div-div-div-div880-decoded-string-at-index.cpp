class Solution {
public:
    //Interesting problem just finding total length of a string and traverse reverse from a given string 
    string decodeAtIndex(string s, int k) {
        long length=0,n=s.length();
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                length*=s[i]-'0';
            }
            else{
                length++;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(isdigit(s[i])){
                length/=s[i]-'0';
                k=k%length;
            }
            else{
                if(k==0 || length==k){
                    string res="";
                    return res+s[i];
                }
                length--;
            }
        }
        return "";
    }
};