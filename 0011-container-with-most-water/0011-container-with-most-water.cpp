class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0,start=0,end=height.size()-1;
        while(start<end){
            int vol=min(height[start],height[end])*(end-start);
            if(vol>area){
                area=vol;
            }
            if(height[start]==min(height[start],height[end])){
                start++;
            }
            else{end--;}
        }
    return area;
    }
};