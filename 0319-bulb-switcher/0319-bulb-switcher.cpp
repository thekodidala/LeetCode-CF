class Solution {
public:
    int bulbSwitch(int n) {
        int res=0,i=1;
        //Here sqrt of n bulbs will glow finally..
        while(i*i<=n){
            i++;res++;
        }
        return res;
    }
};