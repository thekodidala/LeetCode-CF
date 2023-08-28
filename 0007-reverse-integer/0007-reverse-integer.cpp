class Solution {
public:
    int reverse(int x) {
        int sum=0,p=0;
        while(x!=0){
            int n=x%10;
            if(sum>INT_MAX/10||(sum==INT_MAX&&n>7))return 0;
            if(sum<INT_MIN/10||(sum==INT_MIN&&n<8))return 0;
            sum=sum*10+n;
            p++;
            x/=10;
            
        }
        return sum;
    }
};