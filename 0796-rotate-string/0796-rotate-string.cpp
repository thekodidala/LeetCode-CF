class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())return false;
        int n=s.length();
        for(int i=0;i<n;i++){
            int j=0;
            while(j<n && s[(i+j)%n]==goal[j])j++;
            if(j==n)return true;
        }
        return false;
    }
};