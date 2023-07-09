class Solution {
public:
    int largestVariance(string s) {
        vector<int>counter(26,0);
        for(auto c:s){
            counter[c-'a']++;
        }
        int res=0;
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                if(i==j || counter[i]==0 || counter[j]==0){
                    continue;
                }
                int countmaj=0,countminor=0;
                char major='a'+i;
                char minor='a'+j;
                int restminor=counter[j];
                for(auto c:s){
                    if(c==major){countmaj++;}
                    if(c==minor){countminor++;restminor--;}
                    if(countminor>0){
                        res=max(res,countmaj-countminor);
                    }
                    if(countmaj<countminor &&restminor>0){
                        countminor=0;
                        countmaj=0;
                    }
                }
            }
        }
        return res;
    }
};