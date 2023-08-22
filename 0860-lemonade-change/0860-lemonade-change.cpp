class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int s5=0,s10=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                s5+=1;
            }
            else if(bills[i]==10&&s5>=1){
                s5-=1;
                s10+=1;
            }
            else if(bills[i]==20&&((s5>=1&&s10>=1)||s5>=3)){
                if(s5>=1&&s10>=1){
                    s5-=1;
                    s10-=1;
                }
                else{
                    s5-=3;
                }
            }
            else{return false;}
        }
        return true;
    }
};