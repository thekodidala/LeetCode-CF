class Solution {
public:
    int distanceBetweenBusStops(vector<int>& dist, int start, int dest) {
        int n=dist.size();
        int s1=0,s2=0;
        for(int i=start;i%n!=dest;i++){
            s1+=dist[i%n];
        }
        for(int j=dest;j%n!=start;j++){
            s2+=dist[j%n];
        }
        return min(s1,s2);
    }
};