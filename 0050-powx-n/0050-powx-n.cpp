class Solution {
public:
    double pow(double x,long long n){
        if(n==0)return 1;
        if(n<0)return 1.0/pow(x,-1*n);
        if(n%2==1){
            return x*pow(x*x,n/2);
        }
        else{
            return pow(x*x,n/2);
            
        }
    }
    double myPow(double x, int n) {
        return pow(x,(long long)n);
    }
};