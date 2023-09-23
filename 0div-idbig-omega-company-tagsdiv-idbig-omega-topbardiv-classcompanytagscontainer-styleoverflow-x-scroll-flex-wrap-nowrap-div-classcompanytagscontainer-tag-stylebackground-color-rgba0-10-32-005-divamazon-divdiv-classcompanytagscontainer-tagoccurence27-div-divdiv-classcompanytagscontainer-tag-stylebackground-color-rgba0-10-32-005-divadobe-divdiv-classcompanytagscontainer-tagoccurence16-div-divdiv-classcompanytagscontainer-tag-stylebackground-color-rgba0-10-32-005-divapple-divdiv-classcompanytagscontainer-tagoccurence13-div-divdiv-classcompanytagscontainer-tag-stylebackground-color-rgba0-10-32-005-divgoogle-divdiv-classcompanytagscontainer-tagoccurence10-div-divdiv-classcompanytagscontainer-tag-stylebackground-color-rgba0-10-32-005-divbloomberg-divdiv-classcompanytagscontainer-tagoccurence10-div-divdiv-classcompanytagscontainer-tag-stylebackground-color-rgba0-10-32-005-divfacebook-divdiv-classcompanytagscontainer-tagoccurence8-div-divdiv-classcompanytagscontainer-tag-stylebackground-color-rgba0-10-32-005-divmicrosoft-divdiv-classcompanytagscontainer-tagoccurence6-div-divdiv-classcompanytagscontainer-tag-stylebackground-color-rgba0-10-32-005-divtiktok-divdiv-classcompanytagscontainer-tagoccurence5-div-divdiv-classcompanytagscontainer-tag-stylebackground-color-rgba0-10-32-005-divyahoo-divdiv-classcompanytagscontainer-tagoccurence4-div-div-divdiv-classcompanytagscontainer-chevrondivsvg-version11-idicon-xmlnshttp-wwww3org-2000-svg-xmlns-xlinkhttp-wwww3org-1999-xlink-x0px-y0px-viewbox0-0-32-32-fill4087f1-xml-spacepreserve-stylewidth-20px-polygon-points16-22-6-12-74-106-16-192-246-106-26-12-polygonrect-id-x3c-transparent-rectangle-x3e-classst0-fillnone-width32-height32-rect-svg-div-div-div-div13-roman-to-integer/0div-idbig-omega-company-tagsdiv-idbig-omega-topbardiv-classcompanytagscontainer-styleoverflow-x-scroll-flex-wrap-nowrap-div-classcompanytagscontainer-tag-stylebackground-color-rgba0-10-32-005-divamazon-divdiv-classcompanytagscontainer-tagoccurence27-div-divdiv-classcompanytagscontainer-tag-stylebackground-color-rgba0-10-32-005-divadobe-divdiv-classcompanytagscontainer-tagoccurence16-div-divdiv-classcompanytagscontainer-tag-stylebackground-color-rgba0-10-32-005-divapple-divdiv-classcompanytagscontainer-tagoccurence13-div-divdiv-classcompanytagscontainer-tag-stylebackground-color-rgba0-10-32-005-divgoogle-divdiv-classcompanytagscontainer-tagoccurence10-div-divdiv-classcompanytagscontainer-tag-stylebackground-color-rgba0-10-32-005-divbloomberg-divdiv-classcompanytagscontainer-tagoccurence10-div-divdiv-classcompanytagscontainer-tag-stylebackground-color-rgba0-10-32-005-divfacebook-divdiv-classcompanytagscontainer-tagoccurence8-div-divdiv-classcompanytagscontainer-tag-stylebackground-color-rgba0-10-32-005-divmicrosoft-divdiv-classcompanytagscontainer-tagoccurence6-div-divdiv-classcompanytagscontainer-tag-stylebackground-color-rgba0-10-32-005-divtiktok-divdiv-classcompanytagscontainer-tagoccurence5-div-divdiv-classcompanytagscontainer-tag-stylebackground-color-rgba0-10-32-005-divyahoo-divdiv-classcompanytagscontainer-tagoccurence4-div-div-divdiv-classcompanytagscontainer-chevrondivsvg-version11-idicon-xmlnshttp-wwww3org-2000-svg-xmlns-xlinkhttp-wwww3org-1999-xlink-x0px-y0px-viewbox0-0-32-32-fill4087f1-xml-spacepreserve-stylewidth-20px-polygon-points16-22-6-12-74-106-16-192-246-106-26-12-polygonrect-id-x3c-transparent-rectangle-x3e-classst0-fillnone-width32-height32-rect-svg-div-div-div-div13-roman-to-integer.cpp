class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>um={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int i=0,n=s.length(),sum=0;
        while(i<n){
            if(s[i]=='I'){
                if(s[i+1]=='V'){
                    sum+=4;
                    i++;
                }
                else if(s[i+1]=='X'){
                    sum+=9;
                    i++;
                }
                else{
                    sum+=um[s[i]];
                }
            }
            else if(s[i]=='X'){
                if(s[i+1]=='L'){
                    sum+=40;
                    i++;
                }
                else if(s[i+1]=='C'){
                    sum+=90;
                    i++;
                }
                else{
                    sum+=um[s[i]];
                }
            }
            
            else if(s[i]=='C'){
                if(s[i+1]=='D'){
                    sum+=400;
                    i++;
                }
                else if(s[i+1]=='M'){
                    sum+=900;
                    i++;
                }
                else{
                    sum+=um[s[i]];
                }
            }
            else{
                sum+=um[s[i]];
            }
            i++;
        }
        return sum;
    }
};