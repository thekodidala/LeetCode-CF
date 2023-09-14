class Solution {
public:
    int maxScore(vector<int>& points, int k) {
        int n=points.size(),res=0;
        for(int i=0;i<k;i++){
            res+=points[i];
        }
        int i=k-1,cnt=0,cur=res,j=n-1;
        while(i<k &&i>=0){
            cur-=points[i];
            cur+=points[j-cnt];
            res=max(cur,res);
            cnt++;
            i--;
        }
        return res;
    }
};