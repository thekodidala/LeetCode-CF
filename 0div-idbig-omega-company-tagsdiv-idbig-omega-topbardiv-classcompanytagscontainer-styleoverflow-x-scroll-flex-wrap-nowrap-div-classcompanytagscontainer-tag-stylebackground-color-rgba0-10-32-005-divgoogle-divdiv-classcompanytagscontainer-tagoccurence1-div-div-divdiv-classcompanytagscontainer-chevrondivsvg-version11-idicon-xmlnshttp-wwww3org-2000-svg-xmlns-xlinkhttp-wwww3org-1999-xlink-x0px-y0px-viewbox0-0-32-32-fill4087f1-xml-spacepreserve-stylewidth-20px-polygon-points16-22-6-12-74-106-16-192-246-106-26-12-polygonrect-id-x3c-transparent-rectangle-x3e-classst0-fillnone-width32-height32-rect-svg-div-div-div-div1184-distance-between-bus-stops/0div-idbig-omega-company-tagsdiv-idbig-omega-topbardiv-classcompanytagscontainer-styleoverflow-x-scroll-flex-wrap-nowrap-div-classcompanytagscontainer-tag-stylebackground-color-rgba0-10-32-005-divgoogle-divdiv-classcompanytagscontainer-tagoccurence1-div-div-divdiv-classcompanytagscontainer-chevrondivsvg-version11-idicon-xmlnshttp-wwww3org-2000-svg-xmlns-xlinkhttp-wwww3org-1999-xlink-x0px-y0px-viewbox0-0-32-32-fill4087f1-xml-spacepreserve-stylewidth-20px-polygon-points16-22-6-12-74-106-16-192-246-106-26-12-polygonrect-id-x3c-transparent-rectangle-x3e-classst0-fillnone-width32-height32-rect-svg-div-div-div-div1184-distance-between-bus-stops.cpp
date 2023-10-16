class Solution {
public:
    int distanceBetweenBusStops(vector<int>& dist, int start, int dest) {
        int n=dist.size();
        int s1=0,s2=0,flag1=0,flag2=0;
        for(int i=start;i%n!=dest;i++){
            // if(i%n==dest){
            //     flag1=1;
            //     break;
            // }
            s1+=dist[i%n];
        }
        
        for(int j=dest;j%n!=start;j++){
            //flag2=1;
            // if(j%n==start){
            //     flag2=1;
            //     break;
            // }
            s2+=dist[j%n];
        }
        // if(flag1 && !flag2){
        //     return s1;
        // }
        // else if(!flag1&&flag2){
        //     return s2;
        // }
        return min(s1,s2);
    }
};