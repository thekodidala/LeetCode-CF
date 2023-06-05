class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        if(n==1)return false;
        if(n==2)return true;
        int x0=coordinates[0][0],y0=coordinates[0][1];
        int dx=coordinates[1][0]-x0,dy=coordinates[1][1]-y0;
        for(int i=1;i<coordinates.size();i++){
            int x1=coordinates[i][0],y1=coordinates[i][1];
            if(dx*(y1-y0)!=(x1-x0)*dy)
                return false;
        }
        return true;
    }
};