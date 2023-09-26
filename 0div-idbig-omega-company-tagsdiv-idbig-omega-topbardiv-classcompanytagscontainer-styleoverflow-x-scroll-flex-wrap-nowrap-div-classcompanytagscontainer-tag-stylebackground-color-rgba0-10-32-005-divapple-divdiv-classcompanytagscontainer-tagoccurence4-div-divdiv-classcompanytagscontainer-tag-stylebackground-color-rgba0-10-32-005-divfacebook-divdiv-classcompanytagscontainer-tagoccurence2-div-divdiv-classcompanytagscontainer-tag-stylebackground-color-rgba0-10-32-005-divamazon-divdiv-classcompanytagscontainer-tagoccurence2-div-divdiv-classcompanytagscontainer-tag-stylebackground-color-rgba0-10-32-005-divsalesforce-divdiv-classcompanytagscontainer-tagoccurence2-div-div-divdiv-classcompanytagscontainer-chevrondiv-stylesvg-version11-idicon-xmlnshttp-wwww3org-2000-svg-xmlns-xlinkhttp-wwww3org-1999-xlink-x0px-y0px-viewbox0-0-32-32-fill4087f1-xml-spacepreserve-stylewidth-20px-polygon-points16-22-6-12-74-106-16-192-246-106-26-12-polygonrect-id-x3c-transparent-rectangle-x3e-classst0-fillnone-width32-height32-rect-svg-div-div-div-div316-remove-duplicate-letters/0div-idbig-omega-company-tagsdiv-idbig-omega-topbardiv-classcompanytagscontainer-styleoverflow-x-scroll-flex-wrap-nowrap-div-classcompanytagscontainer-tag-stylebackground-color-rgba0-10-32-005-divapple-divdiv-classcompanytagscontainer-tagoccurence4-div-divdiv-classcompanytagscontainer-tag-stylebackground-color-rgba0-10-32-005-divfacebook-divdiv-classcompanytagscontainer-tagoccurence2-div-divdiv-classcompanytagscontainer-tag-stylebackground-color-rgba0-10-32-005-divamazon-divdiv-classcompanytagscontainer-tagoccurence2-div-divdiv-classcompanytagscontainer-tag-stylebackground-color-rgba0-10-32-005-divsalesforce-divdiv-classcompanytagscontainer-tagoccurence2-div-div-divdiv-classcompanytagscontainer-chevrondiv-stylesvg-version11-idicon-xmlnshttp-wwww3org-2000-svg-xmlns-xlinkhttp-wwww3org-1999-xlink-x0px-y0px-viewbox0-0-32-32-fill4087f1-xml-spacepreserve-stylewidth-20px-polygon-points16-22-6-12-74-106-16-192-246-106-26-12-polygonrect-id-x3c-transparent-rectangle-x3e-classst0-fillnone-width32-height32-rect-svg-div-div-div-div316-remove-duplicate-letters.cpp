class Solution {
public:
    string removeDuplicateLetters(string s) {
        //interesting problem and good logic prb
        //tc-O(n)  ,sc-O(n)
        int n=s.length();
        vector<int>lastoccurindex(26,0);
        for(int i=0;i<n;i++){
            lastoccurindex[s[i]-'a']=i;
        }
        vector<bool>seen(26,false);
        stack<char>st;
        for(int i=0;i<n;i++){
            if(seen[s[i]-'a']){continue;}
            
            while(st.size()>0 && st.top()>s[i] && i<lastoccurindex[st.top()-'a']){
                seen[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            seen[s[i]-'a']=true;
        }
        string str="";
        while(st.size()>0){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};