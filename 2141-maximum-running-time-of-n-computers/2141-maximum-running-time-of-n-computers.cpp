#define ll long long
class Solution {
public:
    bool possible(int n,ll mid,vector<int>& batteries){
        ll total=0;
        for(auto b:batteries){
            if(b<mid){total+=b;}
            else{
                total+=mid;
            }
        }
        if(total/n>=mid){
            return true;
        }
        return false;
    }
    long long maxRunTime(int n, vector<int>& batteries) {
        ll left=0,right=0;
        for(auto b:batteries){
            right+=b;
        }
        ll mid=0;
        while(left<=right){
            mid=left+(right-left)/2;
            if(possible(n,mid,batteries)){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return right;
    }
};