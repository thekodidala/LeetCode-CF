class Solution {
public:
    int bulbSwitch(int n) {
        int res=0,i=1;
        while(i*i<=n){
            i++;res++;
        }
        return res;
    }
};