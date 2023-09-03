class Solution {
public:
    double binary(double x,long long n){
        if(n==0)return 1;
        if(n<0){
            n=n*-1;
            x=1.0/x;
        }
        double res=1;
        while(n){
            if(n%2){
                res=res*x;
                n--;
            }
            x=x*x;
            n/=2;
        }
        return res;
    }
   
    double myPow(double x, int n) {
        //n=(long long)n;
        return binary(x,(long long)n);
    }
};