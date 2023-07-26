class Solution {
public:
    double reqspeed(vector<int> &dist,int speed){
        double total=0.0;
        for(int i=0;i<dist.size();i++){
            double t=(double)dist[i]/(double) speed;
            total+=(i==dist.size()-1)?t:ceil(t);
        }
        return total;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int left=1,right=1e7;
        int minspeed=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(reqspeed(dist,mid)<=hour){
                minspeed=mid;
                right=mid-1;
                
            }
            else{
                left=mid+1;
            }
        }
         return minspeed;
    }
};